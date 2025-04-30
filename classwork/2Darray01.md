Here are some **logic-based problem statements** using 2D arrays in C++ that focus on reasoning and algorithmic thinking:

1. **Magic Square Verification:**  
   Given an `N x N` matrix, determine if it is a **magic square**, meaning:
   - The sum of each row, column, and both diagonals is the same.
   - No duplicate numbers exist.

Here are some **test cases** for the **Magic Square Verification** problem:

### **Test Case 1: Valid Magic Square**
**Input:**  
```
3 3
8 1 6
3 5 7
4 9 2
```
**Expected Output:**  
```
It is a Magic Square!
```
_Explanation:_  
All rows, columns, and diagonals sum to **15**.

---

### **Test Case 2: Invalid Magic Square (Row Sum Mismatch)**
**Input:**  
```
3 3
4 9 2
3 5 8
8 1 6
```
**Expected Output:**  
```
Not a Magic Square.
```
_Explanation:_  
Second row sums to **16** instead of **15**, breaking the magic square condition.

---

### **Test Case 3: Invalid Magic Square (Diagonal Sum Mismatch)**
**Input:**  
```
3 3
2 7 6
9 5 1
4 3 8
```
**Expected Output:**  
```
Not a Magic Square.
```
_Explanation:_  
One diagonal sums to **10** while the other sums to **15**, failing the magic square check.

---

### **Test Case 4: Larger Magic Square (Valid)**
**Input:**  
```
4 4
16 2 3 13
5 11 10 8
9 7 6 12
4 14 15 1
```
**Expected Output:**  
```
It is a Magic Square!
```
_Explanation:_  
All sums equal **34**, confirming it’s a valid magic square.

---

Here's the **algorithm** for **Magic Square Verification**:

### **Algorithm: Magic Square Verification**
1. **Input the matrix** of size `N x N`.
2. **Calculate the sum** of the first row (`sumTarget`).
3. **Check row sums**:  
   - Iterate through each row.
   - Sum the elements of the row.
   - If any row sum differs from `sumTarget`, return `false`.
4. **Check column sums**:  
   - Iterate through each column.
   - Sum the elements of the column.
   - If any column sum differs from `sumTarget`, return `false`.
5. **Check primary diagonal sum**:  
   - Iterate through indices `(i, i)`.
   - Sum diagonal elements.
   - If the diagonal sum differs from `sumTarget`, return `false`.
6. **Check secondary diagonal sum**:  
   - Iterate through indices `(i, N-i-1)`.
   - Sum diagonal elements.
   - If the diagonal sum differs from `sumTarget`, return `false`.
7. **If all checks pass**, return `true` (It is a Magic Square).
8. **Otherwise, return `false` (Not a Magic Square).**

---

**step-by-step dry run** of the **Magic Square Verification algorithm** using an example.

---

### **Example Input Matrix:**
We take a **3x3 matrix**:

```
8  1  6
3  5  7
4  9  2
```
---

### **Step 1: Calculate the Target Sum**
- Sum of the **first row**:  
  `8 + 1 + 6 = 15`
- Set `sumTarget = 15`

---

### **Step 2: Check Row Sums**
- **Row 1:** `8 + 1 + 6 = 15` ✅  
- **Row 2:** `3 + 5 + 7 = 15` ✅  
- **Row 3:** `4 + 9 + 2 = 15` ✅  

All rows match `sumTarget`, so we continue.

---

### **Step 3: Check Column Sums**
- **Column 1:** `8 + 3 + 4 = 15` ✅  
- **Column 2:** `1 + 5 + 9 = 15` ✅  
- **Column 3:** `6 + 7 + 2 = 15` ✅  

All columns match `sumTarget`, so we continue.

---

### **Step 4: Check Diagonal Sums**
- **Primary Diagonal:** `8 + 5 + 2 = 15` ✅  
- **Secondary Diagonal:** `6 + 5 + 4 = 15` ✅  

Both diagonals match `sumTarget`, meaning **all checks pass**!

---

### **Final Step: Result**
Since all rows, columns, and diagonals have the same sum, we conclude:
```
It is a Magic Square! ✅
```






