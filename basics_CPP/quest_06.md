### 1. **Find the Middle Value Among Three Numbers**
> **Problem**:  
Write a function that takes three integers and returns the **middle** one (not maximum, not minimum).

> **Hint**:  
Use basic comparisons (`>`, `<`) between the three numbers.  
Check conditions like:  
- If `a > b` and `a < c` or `a < b` and `a > c`, then `a` is the middle.

---

### 2. **Sum of Digits Until a Single Digit**
> **Problem**:  
Take an integer and **keep adding** its digits recursively until only **one digit** remains.

> **Hint**:  
- Use a function that calculates sum of digits.
- If result >= 10, call the same function again.

---

### 3. **Check if a Year is a Leap Year**
> **Problem**:  
Write a function to check whether a given year is leap year or not.

> **Hint**:  
Leap year if:
- Divisible by 4 **and** not divisible by 100, **or**
- Divisible by 400.

Use logical operators `&&` and `||`.

---

### 4. **Find the Second Last Digit of a Number**
> **Problem**:  
Given a positive integer, find its **second last digit**.

> **Hint**:  
- First, divide number by 10 (`n/10`) to remove the last digit.
- Then get last digit of the result using modulo (`% 10`).

---

### 5. **Convert Hours into Minutes and Seconds**
> **Problem**:  
Write a function that converts hours into minutes and seconds.

> **Hint**:  
- 1 hour = 60 minutes.  
- 1 minute = 60 seconds.  
Multiply properly and print separately.

---

### 6. **Check if the Sum of Two Numbers is Even**
> **Problem**:  
Write a function that returns `true` if the sum of two integers is even.

> **Hint**:  
- Sum the two numbers.
- Check if `(sum % 2 == 0)`.

---

### 7. **Form a New Number from Two Numbers**
> **Problem**:  
Form a new number using **last digit** of first number and **first digit** of second number.

> **Hint**:  
- Last digit → `(firstNumber % 10)`.
- First digit → keep dividing secondNumber by 10 until it's < 10.

Then combine them (e.g., `lastDigit * 10 + firstDigit`).

---

### 8. **Swap Two Numbers Without Using a Third Variable**
> **Problem**:  
Swap two integers without using a temporary variable, using pass-by-reference.

> **Hint**:  
Use simple math:  
- `a = a + b;`
- `b = a - b;`
- `a = a - b;`

And pass variables by reference (`&`) to modify them.

---

### 9. **Find Power Using Only Multiplication**
> **Problem**:  
Write a function to compute `a^b` using only multiplication, no `pow()` or loops.

> **Hint**:  
Use **recursion**:  
- `a^b = a * a^(b-1)`  
Base case: `b == 0 → return 1`.

---

### 10. **Check if Three Angles can Form a Triangle**
> **Problem**:  
Check if three given angles form a valid triangle.

> **Hint**:  
If sum of three angles == 180 degrees, return true.

Simple addition and comparison.

---

#  Bonus Tips

- Write **small helper functions** if your logic becomes bigger.
- Always add a **base case** for recursion-based problems (like Problem 2 and 9).
- Carefully choose return types: `bool`, `int`, `void`, depending on question.

