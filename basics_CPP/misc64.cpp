#include <windows.h>
#include <dbghelp.h>
#include <iostream>
#include <fstream>

#pragma comment(lib, "dbghelp.lib")

void WriteLog(const std::string& msg) {
    std::ofstream log("crash.log", std::ios::app);
    log << msg << std::endl;
}

LONG WINAPI CustomExceptionHandler(EXCEPTION_POINTERS* ExceptionInfo) {
    HANDLE hFile = CreateFile(
        L"crashdump.dmp",
        GENERIC_WRITE,
        0,
        nullptr,
        CREATE_ALWAYS,
        FILE_ATTRIBUTE_NORMAL,
        nullptr
    );

    if (hFile != INVALID_HANDLE_VALUE) {
        MINIDUMP_EXCEPTION_INFORMATION dumpInfo;
        dumpInfo.ThreadId = GetCurrentThreadId();
        dumpInfo.ExceptionPointers = ExceptionInfo;
        dumpInfo.ClientPointers = FALSE;

        BOOL success = MiniDumpWriteDump(
            GetCurrentProcess(),
            GetCurrentProcessId(),
            hFile,
            MiniDumpWithFullMemory,
            &dumpInfo,
            nullptr,
            nullptr
        );

        if (success) {
            WriteLog("Dump file created successfully.");
            std::cout << "Dump file created successfully.\n";
        } else {
            WriteLog("MiniDumpWriteDump failed.");
        }

        CloseHandle(hFile);
    } else {
        WriteLog("Failed to create dump file.");
    }

    // Optional: Restart the application
    STARTUPINFO si = { sizeof(si) };
    PROCESS_INFORMATION pi;
    TCHAR szFileName[MAX_PATH];
    GetModuleFileName(NULL, szFileName, MAX_PATH);
    if (CreateProcess(szFileName, NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi)) {
        WriteLog("Application restarted after crash.");
        CloseHandle(pi.hProcess);
        CloseHandle(pi.hThread);
    } else {
        WriteLog("Failed to restart application.");
    }

    return EXCEPTION_EXECUTE_HANDLER;
}

int main() {
    SetUnhandledExceptionFilter(CustomExceptionHandler);

    std::cout << "App running. About to crash...\n";

    int* crashPtr = nullptr;
    *crashPtr = 999;  // Force crash

    return 0;
}
