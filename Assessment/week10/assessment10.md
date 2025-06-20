
---

**Assessment Week10: 20th Jun 2025**

**Programming Test**   

**Max time: 120 minutes**   


---

**Note:**
a. All the questions require you to implement a function. You may call additional functions as needed.
b. The code should be written in the C or C++ language.
c. Do not use any library functions unless explicitly specified in the question.
d. There is **no need to write the main function** and the code to take the inputs from the user using `scanf` or `cin`.

> **The focus should be on the logic inside the function.**

---

### 1. First Non-Repeating Character: (20 Marks)

Write a function that returns the first non-repeating character from a string. Return a space `' '` if none found. A non-repeating character is a character that occurs only once anywhere in the whole string.

**Example:**

Input: `"appliedmaterials"` → Output: `'d'`

> In the above example the letters a, p, l, i, e all occur at least twice in the string hence are not non-repeating. Hence the first non-repeating character is d.

Input: `"abacbc"` → Output: `' '`

> In the above example all the characters are repeating. Hence the function is expected to return a space `' '`.

**Constraints:**

* String length <= 100
* Time Complexity: O(N)
* Space Complexity: O(1)

**Function Prototype:**

```cpp
char FirstUniqueChar(char* str);
```

---

### 2. Row with Maximum Ones (30 Marks)

You are given a **2D binary matrix** (only 0s and 1s) of size **N x N**, where each row is sorted in non-decreasing order. The function is expected to return the index (base 0) of the row with the maximum number of 1s.

**Example:**
Here is a 4x4 matrix
Input:

```
0 0 0 1   // row index 0 has 1 one  
0 0 1 1   // row index 1 has 2 one  
0 1 1 1   // row index 2 has 3 one  
0 0 1 1   // row index 3 has 2 one
```

**Output:**
`2`

> In the above example the index of the row with the maximum number of ones is 2.

---


### Constraints for Q2 (continued):

* Maximum Matrix Size: 100×100
* Time Complexity: Better than O(N²). A working O(N) solution is ideal and will get you the maximum marks. A working O(N²) solution will get you only 15 out of 30 marks.
* Space Complexity: O(1)

---

### Function Prototype:

```cpp
int RowWithMaxOnes(int matrix[][100], int N);
```

---

### 3. Reverse Every K Nodes in a Linked List (50 Marks)

You are given a singly linked list. Write a function to reverse every group of K nodes. If the last group has fewer than K nodes, leave it unchanged.

Assume that each node of the linked list is defined as:

```cpp
struct Node {
    int data;
    struct Node* next;
};
```

---

**Example:**

Input: `1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8`, K = 3
Output: `3 -> 2 -> 1 -> 6 -> 5 -> 4 -> 7 -> 8`

> In the above example the first group of nodes is 1,2,3 which is reversed to 3,2,1.
> The second group is 4,5,6 which is reversed to 6,5,4.
> Since the last group is composed of just 2 nodes and is smaller than the value of K(3), it is left as it is.

---

### Constraints:

* Time Complexity: O(N)
* Space Complexity: O(1)
* Input: Max list size with up to 100 nodes, K between 2 and 10

---

### Function Prototype:

```cpp
Node* ReverseKGroup(Node* pHead, int K);
```

---

> **Negative marks for use of a temporary array or creation of a new list and copying node values to that.**

---
