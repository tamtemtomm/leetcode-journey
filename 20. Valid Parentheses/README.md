# 20. Valid Parentheses

> 🟢 **Difficulty:** Easy

---

## Problem Description

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is **valid**.

An input string is valid if:

- Open brackets must be closed by the **same type** of brackets.  
- Open brackets must be closed in the **correct order**.  
- Every close bracket has a corresponding open bracket of the **same type**.

---

## Input

- `s`: A string consisting of parentheses only: `'()[]{}'`  
- Constraints:  
  - `1 <= s.length <= 10^4`

---

## Output

- `True` if the string is valid, otherwise `False`.

---

## Example 1

**Input:**  
`s = "()"`

**Output:**  
`True`

---

## Example 2

**Input:**  
`s = "()[]{}"`

**Output:**  
`True`

---

## Example 3

**Input:**  
`s = "(]"`

**Output:**  
`False`

---

## Example 4

**Input:**  
`s = "([])"`

**Output:**  
`True`

---

## Hint / Approach

Use a stack to track opening brackets and match them properly with closing brackets in correct order.
