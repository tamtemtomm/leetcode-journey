# 38. Count and Say

> 🟠 **Difficulty:** Medium  
> 🔁 **Type:** Recursion + String manipulation

---

## 🧩 Problem Description

The **count-and-say** sequence is defined as follows:

- `countAndSay(1) = "1"`
- `countAndSay(n)` is the **run-length encoding** (RLE) of `countAndSay(n - 1)`.

**Run-Length Encoding (RLE)** compresses strings by grouping identical characters and replacing them with the count followed by the character.

---

## 📥 Input

- `n`: An integer (1 ≤ n ≤ 30)

## 📤 Output

- The `n`th element in the count-and-say sequence as a string.

---

## ✅ Example 1

**Input:**  
`n = 4`

**Output:**  
`"1211"`

**Explanation:**  
- countAndSay(1) = "1"  
- countAndSay(2) = "11" (one 1)  
- countAndSay(3) = "21" (two 1s)  
- countAndSay(4) = "1211" (one 2, then one 1)

---

## ✅ Example 2

**Input:**  
`n = 1`  
**Output:** `"1"`

---

## 💡 Approach

- Base case: if `n == 1`, return `"1"`.
- Recursively generate the `(n - 1)`th sequence.
- Iterate through that result and construct the current sequence by:
  - Counting consecutive repeated characters.
  - Concatenating `count + character` to the result.

---
