
---

## 🗂️ **Problem Statement: FileTrackerFS – File System Simulator with Access Metadata Indexing**

### 🛠️ **Domain:** System Programming (File Handling, CLI, Access Metadata Management)

### 📦 **Constraints:** Use **STL containers only** (no multithreading), simulate OS-level behavior where appropriate

### 🧰 **STL Focus:** `map`, `set`, `unordered_map`, `deque`, `vector`, `pair`, `tuple`

---

### 🚀 **Objective:**

Build a **File Access Metadata Tracker** that simulates a lightweight file system where you can:

1. Add virtual files with metadata.
2. Simulate file accesses (read/write/delete).
3. Maintain logs and indexes based on:

   * Last accessed time
   * Access frequency
   * User-wise access

---

### 📋 **Functional Requirements:**

1. **Add Virtual File:**

   * Input: `fileID`, `fileName`, `ownerUser`
   * Store in a `map<int, tuple<string, string>>` → fileID → {fileName, owner}

2. **Access File:**

   * Input: `fileID`, `accessType` (`READ`/`WRITE`), `userName`
   * Store:

     * Access timestamp (`int timestamp++`)
     * Access frequency
     * Maintain history per file using `deque<pair<string /*user*/, string /*accessType*/>>`

3. **Delete File:**

   * Remove from all structures
   * Log the delete operation separately

4. **Search Operations:**

   * Files sorted by:

     * Most recently accessed
     * Most accessed
   * List files accessed by a particular user

5. **List All Files:**

   * Sorted by fileName
   * Grouped by owner

---

### 🧠 **Internal Data Structures to Use:**

* `map<int, tuple<string, string>>` — fileID → (fileName, owner)
* `unordered_map<int, int>` — fileID → access frequency
* `unordered_map<int, int>` — fileID → last accessed timestamp
* `unordered_map<string, set<int>>` — userName → files accessed
* `unordered_map<int, deque<pair<string, string>>>` — fileID → {access history}
* `set<pair<int, int>>` — {lastAccessedTime, fileID} for quick retrieval

---

### 🎯 **Sample Commands to Simulate:**

```
ADD 101 fileA.txt alice
ADD 102 fileB.txt bob
ACCESS 101 READ alice
ACCESS 102 WRITE bob
ACCESS 101 READ bob
DELETE 102
LIST_ALL
LIST_RECENT
LIST_BY_USER bob
```

---

### ✅ **Evaluation Criteria:**

| Metric                        | Description                                             |
| ----------------------------- | ------------------------------------------------------- |
| Correct use of STL containers | Proper and efficient use of `map`, `set`, `deque`, etc. |
| Modularity                    | Separate functions for add, access, delete, list, etc.  |
| Efficiency                    | Sorted and indexed access via STL design                |
| System Programming Style      | File-like simulation, CLI-based menu, timestamps        |
| Clean CLI Interface           | Proper interaction and formatted output                 |

---

---

### ✅ **Test Case 1: Add and List All Files**

**Input:**

```
ADD 101 fileA.txt alice
ADD 102 fileB.txt bob
LIST_ALL
```

**Expected Output:**

```
[All Files]
ID: 101 | Name: fileA.txt | Owner: alice
ID: 102 | Name: fileB.txt | Owner: bob
```

---

### ✅ **Test Case 2: Access File and List Recent**

**Input:**

```
ADD 103 fileC.txt carol
ACCESS 103 READ carol
LIST_RECENT
```

**Expected Output:**

```
[Recently Accessed Files]
ID: 103 | Name: fileC.txt | Last Accessed: 1
```

---

### ✅ **Test Case 3: Track Access Frequency**

**Input:**

```
ADD 104 fileD.txt dan
ACCESS 104 READ dan
ACCESS 104 WRITE dan
ACCESS 104 READ dan
```

**Expected Output:**

```
[Access Frequency]
File ID: 104 | Access Count: 3
```

---

### ✅ **Test Case 4: Delete File and Attempt Access**

**Input:**

```
ADD 105 fileE.txt eve
DELETE 105
ACCESS 105 READ eve
```

**Expected Output:**

```
File 105 deleted successfully.
Error: File ID 105 not found.
```

---

### ✅ **Test Case 5: List Files by User Access**

**Input:**

```
ADD 106 fileF.txt frank
ACCESS 106 WRITE alice
ACCESS 106 READ bob
LIST_BY_USER alice
```

**Expected Output:**

```
[Files Accessed by User: alice]
ID: 106 | Name: fileF.txt | Access Type: WRITE
```

---

