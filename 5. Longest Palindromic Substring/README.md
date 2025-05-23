# 5. Longest Palindromic Substring

> 🟠 **Difficulty:** Medium

---

## Problem Description

Given a string `s`, return the **longest palindromic substring** in `s`.

---

## Input

- `s`: A string consisting only of digits and English letters.

---

## Output

- A string representing the longest palindromic substring.

---

## ✅ Example 1

**Input:**  
s = "babad"

**Output:**  
"bab"

**Explanation:**  
"aba" is also a valid answer.

---

## ✅ Example 2

**Input:**  
s = "cbbd"

**Output:**  
"bb"

---

## Constraints

- `1 <= s.length <= 1000`
- `s` consists only of digits and English letters.

---

## 💡 Approach

Use the **expand around center** technique:

1. Iterate through each index in the string.
2. Expand around that index for both **odd-length** and **even-length** palindromes.
3. Keep track of the longest palindrome found during expansions.

This approach runs in **O(n²)** time with **O(1)** extra space.

---

## Available Solutions

- `Longest Palindromic Substring.py` – Python solution using center expansion.
- `Longest Palindromic Substring.js` – JavaScript solution implementing the same approach.
- `Longest Palindromic Substring.c` – C solution using pointers to expand around centers.

---

> 🔎 Try palindromes with even and odd lengths, as well as strings where multiple palindromes of the same length exist.
