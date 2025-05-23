# 7. Reverse Integer

> 🟠 **Difficulty:** Medium

---

## Problem Description

Given a signed 32-bit integer `x`, return `x` with its digits reversed.  
If reversing `x` causes the value to go outside the signed 32-bit integer range `[-2³¹, 2³¹ - 1]`, then return `0`.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

---

## Input

- `x`: A signed 32-bit integer.

---

## Output

- An integer representing the reversed digits of `x`, or `0` if it overflows.

---

## ✅ Example 1

**Input:**  
x = 123

**Output:**  
321

---

## ✅ Example 2

**Input:**  
x = -123

**Output:**  
-321

---

## ✅ Example 3

**Input:**  
x = 120

**Output:**  
21

---

## Constraints

- `-2³¹ <= x <= 2³¹ - 1`

---

## 💡 Approach

1. Extract digits from `x` one by one using modulus and division.
2. Rebuild the reversed number step by step.
3. Before appending a digit, check if appending would cause overflow.
4. Return `0` if overflow detected; otherwise return reversed integer with original sign.

This approach runs in **O(log |x|)** time.

---

## Available Solutions

- `Reverse Integer.py` – Python solution handling overflow.
- `Reverse Integer.js` – JavaScript solution using similar logic.
- `Reverse Integer.c` – C solution carefully checking overflow conditions.

---

> ⚠️ Edge cases: zero, negative numbers, numbers ending with zero, and maximum/minimum 32-bit integers.
