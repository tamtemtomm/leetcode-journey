# 28. Find the Index of the First Occurrence in a String

> 🟢 **Difficulty:** Easy

---

## Problem Description

Given two strings `needle` and `haystack`, return the **index of the first occurrence** of `needle` in `haystack`. If `needle` is not part of `haystack`, return `-1`.

---

## Input

- `haystack`: A string with length `1 <= haystack.length <= 10^4`
- `needle`: A string with length `1 <= needle.length <= 10^4`

Both strings consist only of lowercase English letters.

---

## Output

- An integer representing the starting index of the first occurrence of `needle` in `haystack`, or `-1` if `needle` is not found.

---

## ✅ Example 1

**Input:**  
`haystack = "sadbutsad", needle = "sad"`

**Output:**  
`0`

**Explanation:**  
The substring `"sad"` appears first at index `0` (and also at index `6`), so return `0`.

---

## ✅ Example 2

**Input:**  
`haystack = "leetcode", needle = "leeto"`

**Output:**  
`-1`

**Explanation:**  
`"leeto"` does not occur in `"leetcode"`, so return `-1`.

---

## 💡 Approach

1. Use the built-in string method to find the first occurrence index of `needle` in `haystack`.
2. If the substring is found, return its index; otherwise, return `-1`.

Alternatively,

- Iterate through `haystack` up to `len(haystack) - len(needle) + 1`.
- For each position, check if the substring starting there matches `needle`.
- Return the index if a match is found; if no match, return `-1`.

---

## Edge Cases

- `needle` is an empty string (not in constraints but often asked): typically return 0.
- `needle` is equal to `haystack`.
- `needle` longer than `haystack`: return `-1`.

---

📌 The problem focuses on substring search and requires efficient string matching.
