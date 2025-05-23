# 14. Longest Common Prefix

> 🟢 **Difficulty:** Easy

---

## Problem Description

Write a function to find the **longest common prefix string** amongst an array of strings.

If there is no common prefix, return an empty string `""`.

---

## Input

- `strs`: A list of strings with the following constraints:
  - `1 <= strs.length <= 200`
  - `0 <= strs[i].length <= 200`
  - `strs[i]` consists of only lowercase English letters if it is non-empty

---

## Output

- A string representing the longest common prefix of all strings in the list.

---

## ✅ Example 1

**Input:**  
`strs = ["flower", "flow", "flight"]`

**Output:**  
`"fl"`

---

## ✅ Example 2

**Input:**  
`strs = ["dog", "racecar", "car"]`

**Output:**  
`""`

**Explanation:**  
There is no common prefix among the input strings.

---

## 💡 Approach

1. If the list is empty, return `""`.
2. Use the first string as the reference.
3. Iterate character by character:
   - For each index `i`, check if all other strings have the same character at position `i`.
   - If any string is too short or the character doesn't match, return the substring up to index `i`.
4. If the loop completes without early return, return the whole first string.

---

## Edge Cases
- A single string in the list: return the string itself.

- No common characters at the start: return an empty string.

- One or more empty strings: return an empty string.

📌 Tip: The common prefix must appear in the same order at the beginning of each string.
