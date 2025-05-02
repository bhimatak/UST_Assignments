---

# **Out of 7 solve any 5**  
### **Time: 3 Hours**

---

---

### ✅ Problem Statement 1  

Write a program that performs the following tasks:

1. Finds the **starting positions (0-based index)** of the substrings `"are"` and `"i"` in a given input string.
2. Calculates and prints the **sum of these two positions**.
3. If either of the substrings is not found in the input, treat its position as `-1`.

---

### 🧾 Input Format

A single line containing a string (possibly with multiple words and spaces).

---

### 🖨️ Output Format

Print the sum of the starting positions of the substrings `"are"` and `"i"` in the format:

```
Sum = <sum>
```

---

### 🔍 Notes
- The search is **case-sensitive**.
- Indexing is **0-based**.
- If a substring is not present, consider its position as `-1`.

---

### 🧪 Test Cases

**TC_01**  
**Input:**  
```
there are fruits in the basket
```

**Output:**  
```
Sum = 19
```

**Explanation:**  
- `"are"` starts at index **6**  
- `"i"` starts at index **13**  
- Sum = 6 + 13 = **19**

---

**TC_02**  
**Input:**  
```
The sun is beautiful
```

**Output:**  
```
Sum = 7
```

**Explanation:**  
- `"are"` not found → -1  
- `"i"` starts at index **8**  
- Sum = -1 + 8 = **7**

---

**TC_03**  
**Input:**  
```
We are playing football
```

**Output:**  
```
Sum = 14
```

**Explanation:**  
- `"are"` starts at index **3**  
- `"i"` starts at index **11**  
- Sum = 3 + 11 = **14**

---

**TC_04**  
**Input:**  
```
he works at tcs
```

**Output:**  
```
Sum = -2
```

**Explanation:**  
- `"are"` not found → -1  
- `"i"` not found → -1  
- Sum = -1 + -1 = **-2**

---




---

### ✅ Problem Statement 2

You are given a **sorted array** `A` of size `N` containing integers. Every element in the array appears **exactly twice**, except for **one element** that appears only **once**. Your task is to find and print that **unique element**.

---

### 📌 Constraints

- The array is **sorted** in non-decreasing order.
- `1 ≤ N ≤ 10^5` (N is always **odd**)
- if possible try to solve considering bellow 2 conditions
- Time Complexity: **O(N)**
- Do **not** use extra memory (i.e., no additional data structures like hash maps, sets, or arrays)

---

### 🧾 Input Format

```
The first line contains an integer N — the number of elements in the array.
The second line contains N space-separated integers — the elements of the array.
```

---

### 🖨️ Output Format

```
Print the unique element that appears only once.
```

---

### 🧪 Sample Test Case

**Input:**
```
7  
3 3 4 4 5 5 7
```

**Output:**
```
7
```

---

### 🧠 Explanation

In the array `3 3 4 4 5 5 7`, all elements appear twice except for `7`, which appears only once. Hence, the output is `7`.

---


---

### **Test Case 1**

**Input:**
```
9
1 1 2 2 3 4 4 5 5
```

**Output:**
```
3
```

**Explanation:**  
All elements appear twice except for `3`, which appears only once. Hence, the output is `3`.

---

### **Test Case 2**

**Input:**
```
11
0 0 1 1 2 2 6 6 7 7 9
```

**Output:**
```
9
```

**Explanation:**  
The number `9` appears only once at the end of the array. All other elements appear in pairs.

---

### **Test Case 3**

**Input:**
```
5
-10 -10 -3 -3 0
```

**Output:**
```
0
```

**Explanation:**  
Negative numbers `-10` and `-3` appear twice. The element `0` appears only once.

---

---

### **Test Case 4**

**Input:**
```
7  
3 3 4 4 5 5 7
```

**Output:**
```
7
```

**Explanation:**  
In the array `3 3 4 4 5 5 7`, all elements appear twice except for `7`, which appears only once. Hence, the output is `7`.

---



---

### ✅ Problem Statement 3

You are given an array `A` of size `N` containing **positive integers**. For each element in the array, count the number of elements to its **right** that are **smaller** than the current element.

Your task is to compute and print a list of counts corresponding to each element.

---

### 📌 Constraints

- `2 ≤ N ≤ 100`
- All elements in the array are positive integers.

---

### 🧾 Input Format

```
The first line contains an integer N — the number of elements in the array.
The second line contains N space-separated integers — the elements of the array.
```

---

### 🖨️ Output Format

```
Print N space-separated integers — each representing the count of smaller elements to the right of the corresponding element in the array.
```

---

### 🧪 Sample Test Cases

---

#### ✅ Test Case 1

**Input:**
```
5
5 4 3 2 1
```

**Output:**
```
4 3 2 1 0
```

**Explanation:**  
- 5 has 4 smaller elements to its right: 4, 3, 2, 1  
- 4 has 3: 3, 2, 1  
- 3 has 2: 2, 1  
- 2 has 1: 1  
- 1 has 0

---

#### ✅ Test Case 2

**Input:**
```
5
1 2 3 4 5
```

**Output:**
```
0 0 0 0 0
```

**Explanation:**  
No element has any smaller element to its right.

---

#### ✅ Test Case 3

**Input:**
```
6
5 3 7 1 2 6
```

**Output:**
```
3 2 3 0 0 0
```

**Explanation:**  
- 5 → smaller on right: 3, 1, 2 → count = 3  
- 3 → smaller on right: 1,2 → count = 2  
- 7 → smaller on right: 1, 2, 6 → count = 3  
- 1 → no smaller → count = 0  
- 2 → no smaller → count = 0  
- 6 → no smaller → count = 0  

---

#### ✅ Test Case 4

**Input:**
```
4
4 4 2 1
```

**Output:**
```
2 2 1 0
```

**Explanation:**  
- 4 → 2, 1 → count = 2  
- 4 → 2, 1 → count = 2  
- 2 → 1 → count = 1  
- 1 → nothing → count = 0

---




---

### ✅ Problem Statement 4  

You are given an array `A` of `N` **positive or negative integers**. Your task is to **find the first equilibrium position** in the array.

An **equilibrium position** is an index `i` such that the **sum of elements before index `i` is equal to the sum of elements after index `i`**.

Return the **first equilibrium index (0-based indexing)**. If no such index exists, return `-1`.

---

### 📌 Constraints

- `1 ≤ N ≤ 100`
- `-1000 ≤ A[i] ≤ 1000`

---

### 🧾 Input Format

```
The first line contains an integer N — the size of the array.
The second line contains N space-separated integers — the elements of the array.
```

---

### 🖨️ Output Format

```
Print a single integer — the index of the first equilibrium position, or -1 if it does not exist.
```

---

### 🧪 Test Cases

---

#### ✅ Test Case 1

**Input:**
```
7  
-7 1 5 2 -4 3 0
```

**Output:**
```
3
```

**Explanation:**  
- Sum before index 3 (i.e., -7 + 1 + 5) = -1  
- Sum after index 3 (i.e., -4 + 3 + 0) = -1  
- Both sides are equal → equilibrium index = 3

---

#### ✅ Test Case 2

**Input:**
```
5  
0 0 0 0 -1
```

**Output:**
```
4
```

**Explanation:**  
- Sum before index 4 (i.e., 0 + 0 + 0 + 0) = 0  
- No elements after index 4 → sum = 0  
- Both sides are equal → equilibrium index = 4

---

#### ✅ Test Case 3

**Input:**
```
4  
1 2 3 4
```

**Output:**
```
-1
```

**Explanation:**  
No index has equal left and right sums.

---

#### ✅ Test Case 4 (Corrected)

Let's provide a working case:

**Input:**
```
5  
3 1 5 2 2
```

**Output:**
```
2
```

**Explanation:**  
- Index 2 → sum before: 3 + 1 = **4**, sum after: 2 + 2 = **4**

---



---

### ✅ Problem Statement 5  

You are given an array `A` of **positive integers**. Your task is to find and print all the **leaders** in the array.

An element is considered a **leader** if it is **greater than all elements to its right**. The **rightmost element** is always considered a leader.

Return the list of leaders in the **same order as they appear from right to left** in the original array.

---

### 📌 Constraints

- `1 ≤ N ≤ 100`
- `1 ≤ A[i] ≤ 1000` (where `A[i]` is the ith element of the array)

---

### 🧾 Input Format

```
The first line contains an integer N — the number of elements in the array.
The second line contains N space-separated integers — the elements of the array.
```

---

### 🖨️ Output Format

```
Print the leader elements of the array from **right to left** as they appear.
```

---

### 🧪 Test Cases

---

#### ✅ Test Case 1

**Input:**
```
6  
6 7 4 3 5 2
```

**Output:**
```
2 5 7
```

**Explanation:**  
- Start from right: 2 is a leader  
- 5 > 2 → leader  
- 3, 4 < 5 → not leaders  
- 7 > 5 → leader  
→ Leaders: 2, 5, 7

---

#### ✅ Test Case 2

**Input:**
```
5  
2 6 3 8 4
```

**Output:**
```
4 8
```

**Explanation:**  
- Start from right: 4 is a leader  
- 8 > 4 → leader  
- 3, 6, 2 < 8 → not leaders  
→ Leaders: 4, 8

---

#### ✅ Test Case 3

**Input:**
```
4  
10 9 8 7
```

**Output:**
```
7 8 9 10
```

**Explanation:**  
- All elements to the left are larger than the right  
→ All are leaders when printed from right to left

---

#### ✅ Test Case 4

**Input:**
```
7  
1 2 3 4 5 6 7
```

**Output:**
```
7
```

**Explanation:**  
- Only the last element (7) is the largest among all  
→ Only one leader

---



---

### ✅ Problem Statement 6  

You are given an array `arr[]` of size `N` containing **positive integers**. Your task is to **reverse every sub-array of size `K`**.

If the number of elements left at the end is less than `K`, reverse all of them as is.

---

### 📌 Constraints

- `1 ≤ N ≤ 100`
- `1 ≤ arr[i] ≤ 1000` (for each element in the array)
- `1 ≤ K ≤ N`

---

### 🧾 Input Format

```
The first line contains an integer N – the size of the array.  
The second line contains N space-separated integers.  
The third line contains an integer K – the group size for reversal.
```

---

### 🖨️ Output Format

```
Print the array after reversing every group of K consecutive elements.
```

---

### 🧪 Test Cases

---

#### ✅ Test Case 1

**Input:**
```
6  
1 2 3 4 5 6  
3
```

**Output:**
```
3 2 1 6 5 4
```

---

#### ✅ Test Case 2

**Input:**
```
10  
1 2 3 4 5 6 7 8 9 10  
3
```

**Output:**
```
3 2 1 6 5 4 9 8 7 10
```

---

#### ✅ Test Case 3

**Input:**
```
6  
1 2 1 5 5 6  
3
```

**Output:**
```
1 2 1 6 5 5
```

---

#### ✅ Test Case 4

**Input:**
```
6  
1 2 3 4 5 6  
3
```

**Output:**
```
3 2 1 6 5 4
```

---

#### ✅ Test Case 5

**Input:**
```
100  
1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59 61 63 65 67 69 71 73 75 77 79 81 83 85 87 89 91 93 95 97 99 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 56 58 60 62 64 66 68 70 72 74 76 78 80 82 84 86 88 90 92 94 96 98 100  
3
```

**Output:**
```
5 3 1 11 9 7 17 15 13 23 21 19 29 27 25 35 33 31 41 39 37 47 45 43 53 51 49 59 57 55 65 63 61 71 69 67 77 75 73 83 81 79 89 87 85 95 93 91 2 99 97 8 6 4 14 12 10 20 18 16 26 24 22 32 30 28 38 36 34 44 42 40 50 48 46 56 54 52 62 60 58 68 66 64 74 72 70 80 78 76 86 84 82 92 90 88 98 96 94 100
```

---


---

### ✅ Problem Statement 7

Write a program that takes **two comma-separated lists of integers** as input. For each integer `N` in the first list, the program needs to find the count of its occurrences (denoted as `C`) in the second list. The program should print the result `N-C` for each integer `N` in the first list.

---

### 📌 Constraints

- All integers in the lists are positive integers.
- The integers in the first list may or may not appear in the second list.
- The program should handle cases where some integers in the first list are not found in the second list.

---

### 🧾 Input Format

```
The first line contains a comma-separated list of integers – the first list (list A).  
The second line contains a comma-separated list of integers – the second list (list B).
```

---

### 🖨️ Output Format

For each integer `N` in the first list, print `N-C`, where `C` is the count of `N` in the second list.

Each output should be printed on a new line.

---

### 🧪 Test Cases

#### ✅ Test Case 1

**Input:**
```
7,8,29  
29,8,8,8,7,7,8,7
```

**Output:**
```
7-3  
8-4  
29-1
```

---

#### ✅ Test Case 2

**Input:**
```
1,2,3  
4,5,6,5,5,3
```

**Output:**
```
1-0  
2-0  
3-1
```

---

#### ✅ Test Case 3

**Input:**
```
10,20,30  
10,10,20,20,20
```

**Output:**
```
10-2  
20-3  
30-0
```

---

#### ✅ Test Case 4

**Input:**
```
5,6,7  
7,7,7,6,6,5,5
```

**Output:**
```
5-2  
6-2  
7-3
```

---

### ⚠️ Note:
- The input and output should match **exactly** as shown in the examples, including spaces and newlines.  
- If the integer `N` from the first list is **not found** in the second list, the count `C` should be 0.

---



