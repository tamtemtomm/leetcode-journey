# 9. Palindrome Number

> 🟢 **Difficulty:** Easy

---

## Problem Description

Given an integer `x`, return `true` if `x` is a **palindrome**, and `false` otherwise.

A **palindrome** is a number that reads the same forward and backward.

---

## Input

- `x`: An integer where `-2³¹ <= x <= 2³¹ - 1`.

---

## Output

- `true` if `x` is a palindrome, otherwise `false`.

---

## ✅ Example 1

**Input:**  
`x = 121`

**Output:**  
`true`

**Explanation:**  
121 reads the same from left to right and right to left.

---

## ✅ Example 2

**Input:**  
`x = -121`

**Output:**  
`false`

**Explanation:**  
Reads as 121- from right to left.

---

## ✅ Example 3

**Input:**  
`x = 10`

**Output:**  
`false`

**Explanation:**  
Reads as 01 from right to left.

---

## Constraints

- `-2³¹ <= x <= 2³¹ - 1`

---

## 💡 Follow Up

Can you solve it **without converting the integer to a string**?

---

## 💡 Approach

- Negative numbers and numbers ending in 0 (but not 0 itself) are not palindromes.
- Reverse half of the number and compare with the other half:
  - If the number has even digits: both halves will be equal.
  - If the number has odd digits: remove the middle digit before comparing.

---

## Available Solutions

- `Palindrome Number.py` – Python solution reversing half of the digits without using string conversion.  
- `Palindrome Number.js` – Js implementation.  
- `Palindrome Number.c` – C version using arithmetic operations only.

---

> 🚫 Don't use string conversion for optimal solutions. Use modulo and division to manipulate digits directly.
