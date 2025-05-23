# 3. Longest Substring Without Repeating Characters

> 🟠 **Difficulty:** Medium

---

## Problem Description

Given a string `s`, find the **length of the longest substring** without repeating characters.

---

## Input

- `s`: A string consisting of English letters, digits, symbols, and spaces.

---

## Output

- An integer representing the length of the longest substring without repeating characters.

---

## ✅ Example 1

**Input:**  
s = "abcabcbb"

**Output:**  
3

**Explanation:**  
The answer is "abc", with the length of 3.

---

## ✅ Example 2

**Input:**  
s = "bbbbb"

**Output:**  
1

**Explanation:**  
The answer is "b", with the length of 1.

---

## ✅ Example 3

**Input:**  
s = "pwwkew"

**Output:**  
3

**Explanation:**  
The answer is "wke", with the length of 3.  
Notice that "pwke" is a **subsequence**, not a **substring**.

---

## Constraints

- `0 <= s.length <= 5 * 10⁴`
- `s` consists of English letters, digits, symbols, and spaces.

---

## 💡 Approach

A sliding window approach is optimal for this problem:

1. Use two pointers `start` and `end` to create a dynamic window.
2. Use a hash map to store the **last seen index** of each character.
3. If the current character was seen **within the current window**, update the `start` pointer to skip the duplicate.
4. Update the `max_len` with the length of the current window.

This algorithm runs in **O(n)** time where `n` is the length of the string.

---

## Available Solutions

- `Longest Substring Without Repeating Characters.py` – Python solution using sliding window and hash map.
- `Longest Substring Without Repeating Characters.js` – JavaScript solution using similar logic with object mapping.
- `Longest Substring Without Repeating Characters.c` – C solution using array indexing or hash table.

---

> 🔍 Try strings with special characters, spaces, or empty strings to test edge cases.
