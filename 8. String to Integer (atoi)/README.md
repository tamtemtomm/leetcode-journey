# 8. String to Integer (atoi)

> 🟠 **Difficulty:** Medium

---

## Problem Description

Implement the `myAtoi(string s)` function, which converts a string to a 32-bit signed integer.

The algorithm for `myAtoi(string s)` is as follows:

1. **Whitespace:** Ignore any leading whitespace (`" "`).  
2. **Signedness:** Determine the sign by checking if the next character is `'-'` or `'+'`, assuming positivity if neither present.  
3. **Conversion:** Read the integer by skipping leading zeros until a non-digit character is encountered or the end of the string is reached. If no digits were read, then the result is 0.  
4. **Rounding:** If the integer is out of the 32-bit signed integer range `[-2³¹, 2³¹ - 1]`, then round the integer to remain in the range. Specifically, integers less than `-2³¹` should be rounded to `-2³¹`, and integers greater than `2³¹ - 1` should be rounded to `2³¹ - 1`.  
5. Return the integer as the final result.

---

## Input

- `s`: A string consisting of English letters, digits, whitespace, `'+'`, `'-'`, and `'.'`.

---

## Output

- A 32-bit signed integer converted from the string following the rules above.

---

## ✅ Example 1

**Input:**  
`s = "42"`

**Output:**  
`42`

---

## ✅ Example 2

**Input:**  
`s = " -042"`

**Output:**  
`-42`

---

## ✅ Example 3

**Input:**  
`s = "1337c0d3"`

**Output:**  
`1337`

---

## ✅ Example 4

**Input:**  
`s = "0-1"`

**Output:**  
`0`

---

## ✅ Example 5

**Input:**  
`s = "words and 987"`

**Output:**  
`0`

---

## Constraints

- `0 <= s.length <= 200`

---

## 💡 Approach

1. Skip leading whitespaces.  
2. Detect sign if present.  
3. Parse consecutive digit characters into an integer.  
4. Check for overflow and clamp to `INT_MAX` or `INT_MIN` if out of range.  
5. Return the signed integer result.

---

## Available Solutions

- `String to Integer (atoi).py` – Python solution handling sign, whitespace, and overflow.  
- `String to Integer (atoi).js` – JavaScript implementation with similar logic.  
- `String to Integer (atoi).c` – C implementation with careful character parsing and overflow checks.

---

> ⚠️ Edge cases: strings with no digits, strings with only whitespace, presence of non-digit characters after digits, and overflow handling.
