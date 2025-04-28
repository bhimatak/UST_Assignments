# Logical C++ Questions  

---

### 1. **Lost Treasure Map**

A pirate found a number carved on a rock. He believes the smallest digit in that number points to the next island he should sail to.  
Write a program to find the smallest digit in the given number.

---

### 2. **Odd Coin Counting**

In a village fair, you earn odd-numbered coins (1, 3, 5...) from games.  
Given your total coin-collection number, find the **sum of only the odd digits** of your coin number to determine your prize.

---

### 3. **Broken Clock**

A magical clock only rings when the current minute is a divisor of the hour shown.  
Given an hour value, print all minutes when the clock will ring.

---

### 4. **Secret Message in Binary**

You received a secret code in the form of an integer.  
The number of `1`s in its binary form tells how many steps you need to unlock a door.  
Find the number of 1s in the binary form of the given number.

---

### 5. **King's Perfect Army**

A king decided only perfect armies can enter the final battle.  
An army's number is perfect if the sum of its divisors equals the number itself.  
Check whether a given army number is perfect.

---

### 6. **Spaceship Countdown**

Before launching, a spaceship performs a countdown from a given number `n` to `1`.  
Write a program to simulate the countdown using a `while` loop.

---

### 7. **First Non-Zero Digit in Secret Code**

A code is considered valid only if its first non-zero digit from the left is even.  
Write a program that extracts the first non-zero digit and checks if it's even.

---

### 8. **Energy Crystals**

An alien crystal's energy level is always a power of 2 (like 2, 4, 8, 16, 32...).  
Given an energy reading, find the highest power of 2 **less than or equal** to the reading.

---

### 9. **Magic Multiplying Puzzle**

You find a magic box that multiplies the digits of a number you enter.  
If the final product of digits is a prime number, the box opens.  
Write a program to simulate the box opening logic.

---

### 10. **The Doubling Machine**

A strange machine doubles a number every time you press a button.  
Starting from 1, you press the button `n` times.  
Find the sum of all numbers you see after each press.

---

# 🎯 Important:
Each of these:

- **Feels like a short story** ✅
- **Needs logic extraction** ✅
- **Needs pure operators, loops, conditions** ✅
- **No arrays, no strings** ✅

---

# ✨ Example to Understand:

**Problem 1 — "Lost Treasure Map"**  
- You are *given a number*.  
- Find *smallest digit*.  
- You realize:  
  - Need to **peel digits** one by one (`n % 10`)  
  - Keep track of **smallest** using comparison.  
  - Use **while loop** to go through all digits.

**So you THINK first**, then **program!**

---
