# 12. Integer to Roman

> 🟠 **Difficulty:** Medium

---

## Problem Description

Given an integer, convert it to a Roman numeral.

Seven different symbols represent Roman numerals with the following values:

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

- Roman numerals are formed by converting decimal place values from highest to lowest.
- **Subtractive combinations**:
  - 4 → IV
  - 9 → IX
  - 40 → XL
  - 90 → XC
  - 400 → CD
  - 900 → CM
- Only the symbols I, X, C, and M can be repeated (at most 3 times).
- V, L, and D can never be repeated.

---

## Input

- `num`: An integer between 1 and 3999 inclusive.

---

## Output

- A string representing the Roman numeral form of the input integer.

---

## ✅ Example 1

**Input:**  
`num = 3749`

**Output:**  
`"MMMDCCXLIX"`

**Explanation:**
- 3000 → MMM
- 700 → DCC
- 40 → XL
- 9 → IX

---

## ✅ Example 2

**Input:**  
`num = 58`

**Output:**  
`"LVIII"`

**Explanation:**
- 50 → L  
- 8 → VIII

---

## ✅ Example 3

**Input:**  
`num = 1994`

**Output:**  
`"MCMXCIV"`

**Explanation:**
- 1000 → M  
- 900 → CM  
- 90 → XC  
- 4 → IV

---

## Constraints

- `1 <= num <= 3999`

---

## 💡 Approach

1. Use two parallel lists:
   - `val` for integer values
   - `syms` for corresponding Roman symbols.
2. Start from the largest value:
   - While `num` is greater than or equal to `val[i]`, append `syms[i]` to the result and subtract `val[i]` from `num`.
3. Repeat until the number is reduced to 0.

---

## Available Solutions

- `Integer to Roman.py` – Python solution using greedy matching of values and symbols.
- `Integer to Roman.js` – JavaScript version with similar greedy strategy.
- `Integer to Roman.c` – C implementation with loops and string concatenation.

---

> ⚠️ Edge cases: Inputs like 4, 9, 40, 90, 400, 900 where subtractive notation must be used.
