---

# 📋 10 More Logical + Programming Questions  
(*no arrays/strings, focused on pure logic and basic programming*)

---

### 1. **Find the Smallest Digit in a Number**
> **Problem**:  
Input an integer and find the smallest digit inside it.  

> **Logical Tip**:  
- Peel digits one by one (`%10` and `/10`).
- Compare with a running `min`.

---

### 2. **Sum Only Odd Digits of a Number**
> **Problem**:  
Input a number and sum **only** its odd digits.

> **Logical Tip**:  
Extract each digit, check if odd (`digit % 2 != 0`), add it.

---

### 3. **Print All Divisors of a Number**
> **Problem**:  
Given a number `n`, print all numbers which divide `n` exactly.

> **Logical Tip**:  
Loop from `1` to `n`, check if `n % i == 0`.

---

### 4. **Count the Number of 1s in Binary Representation of a Number**
> **Problem**:  
Input a number. Count how many `1`s are there in its binary form.

> **Logical Tip**:  
Keep checking `n % 2`, divide by 2.

---

### 5. **Check if a Number is a Perfect Number**
> **Problem**:  
A number is perfect if sum of its proper divisors equals the number itself (e.g., 6 = 1 + 2 + 3).

> **Logical Tip**:  
Sum divisors up to `n/2` and compare with `n`.

---

### 6. **Print Reverse Counting from N to 1 using while loop**
> **Problem**:  
Input `n`. Print numbers from `n` down to `1` using a `while` loop.

> **Logical Tip**:  
Simple decrementing logic inside a loop.

---

### 7. **Find the First Non-Zero Digit of a Number**
> **Problem**:  
Input a number, and print the **first non-zero digit** from the left.

> **Logical Tip**:  
Divide by 10 until number becomes <10.  
Carefully handle numbers like `50400`.

---

### 8. **Find the Highest Power of 2 Less Than or Equal to N**
> **Problem**:  
Input `n`. Find the largest power of 2 (2^k) such that `2^k <= n`.

> **Logical Tip**:  
Multiply by 2 repeatedly till crossing `n`.

---

### 9. **Check if the Product of Digits is a Prime Number**
> **Problem**:  
Input an integer, multiply its digits.  
Check if the result is a prime number.

> **Logical Tip**:  
First find product, then check primality by dividing up to √(product).

---

### 10. **Sum of Series 1 + 2 + 4 + 8 + ... up to N terms**
> **Problem**:  
Print the sum of a series where each term is double the previous, starting with 1.

> **Logical Tip**:  
Initialize `term=1`, then in loop, `term = term * 2` for each next term.

---

# 🎯 Summary Table:

| Q.No | Key Concept/Topic                      |
|-----|-----------------------------------------|
| 1   | Min digit from number                   |
| 2   | Odd digits sum                          |
| 3   | Finding divisors                        |
| 4   | Binary counting (1s)                    |
| 5   | Perfect number                          |
| 6   | Reverse counting                        |
| 7   | First non-zero digit                    |
| 8   | Highest power of 2                      |
| 9   | Product of digits and prime check       |
| 10  | Exponential series sum                  |

---

# 📢  
**Important:**  
Each of these requires **basic loops + if + math operators** → exactly what makes your logic better without confusing with arrays or advanced concepts.

---
