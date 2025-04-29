---

### 1. **The Endless Tunnel Puzzle**

**Hint**:  
- Start with a function that takes the current energy (`n`) as input.
- **Recursion Base Case**: Stop when energy becomes zero or less.
- **Logic**: At each recursive step, print the energy and call the function with `energy / 2`.
- This simulates halving energy as you move through each gate.

**Example**:  
For `n = 16`, the energy would be halved as:  
16 → 8 → 4 → 2 → 1 → 0 (printing each energy value).

---

### 2. **Tower of Oddity**

**Hint**:  
- You are allowed to visit only **odd-numbered** floors.
- Start from floor `1`, and recursively call the function, adding `2` to the current floor each time, until it exceeds `n`.
- **Recursion Base Case**: If the floor is greater than `n`, stop.

**Example**:  
For `n = 10`, the function should print:
```
1, 3, 5, 7, 9
```
Each time, increment by 2 to skip even-numbered floors.

---

### 3. **Number Mirror**

**Hint**:  
- Extract the last digit of a number using the modulus operator (`n % 10`).
- **Recursion Base Case**: When `n` becomes zero, stop.
- **Logic**: Print the current digit, then recursively call the function with `n / 10` to remove the last digit.

**Example**:  
For `n = 1234`, you will print the digits in reverse order:
```
4 3 2 1
```

---

### 4. **Summoning the Dragon**

**Hint**:  
- Use a **loop** to iterate through numbers from `1` to `n`.
- For each number, check if it's divisible by `3`. If it is, **skip** that number.
- **Logic**: If not divisible by `3`, print the number.

**Example**:  
For `n = 10`, the program should print:
```
1 2 4 5 7 8 10
```
Numbers divisible by 3 (3, 6, 9) are skipped.

---

### 5. **Stairway of Squares**

**Hint**:  
- Each step involves summing the square of all previous steps.  
- **Recursion Base Case**: If `n == 0`, return `0` (no more steps).
- **Logic**: For each step, return the square of `n` and add the sum of squares for the previous steps (`n-1`).

**Example**:  
For `n = 3`, the sum of squares would be:
```
3^2 + 2^2 + 1^2 = 9 + 4 + 1 = 14
```

---
