# 13. Roman to Integer

> 🟢 **Difficulty:** Easy

---

## Problem Description

Given a Roman numeral string, convert it to an integer.

---

## Roman Numerals Reference

| Symbol | Value |
|--------|-------|
| I      | 1     |
| V      | 5     |
| X      | 10    |
| L      | 50    |
| C      | 100   |
| D      | 500   |
| M      | 1000  |

---

### Roman Numeral Rules

- Roman numerals are generally written from largest to smallest left to right.
- However, subtractive notation is used in specific cases:

| Subtractive Form | Value |
|------------------|-------|
| IV               | 4     |
| IX               | 9     |
| XL               | 40    |
| XC               | 90    |
| CD               | 400   |
| CM               | 900   |

---

## Input

- `s`: A valid Roman numeral string of length between 1 and 15.

---

## Output

- An integer corresponding to the Roman numeral.

---

## ✅ Example 1

**Input:**  
`s = "III"`

**Output:**  
`3`

**Explanation:**  
III = 1 + 1 + 1 = 3

---

## ✅ Example 2

**Input:**  
`s = "LVIII"`

**Output:**  
`58`

**Explanation:**  
L = 50, V = 5, III = 3

---

## ✅ Example 3

**Input:**  
`s = "MCMXCIV"`

**Output:**  
`1994`

**Explanation:**  
M = 1000, CM = 900, XC = 90, IV = 4

---

## Constraints

- `1 <= s.length <= 15`
- `s` contains only the characters: 'I', 'V', 'X', 'L', 'C', 'D', 'M'
- It is guaranteed that `s` is a valid Roman numeral in the range [1, 3999]

---

## 💡 Approach

1. Create a map of Roman symbols to their values.
2. Traverse the string from right to left:
   - If the current symbol is **less than** the previous one, **subtract** it from the total.
   - Otherwise, **add** it to the total.
3. Return the total as the final result.

---

## Available Solutions

- `Roman to Integer.py` – Python solution with reverse traversal and conditional addition/subtraction.
- `Roman to Integer.js` – JavaScript version with similar map-based logic.
- `Roman to Integer.c` – C implementation with loops and conditional checks.

---

> ⚠️ Edge cases: Watch for subtractive forms like IV, IX, etc., where a smaller value comes before a larger one.
