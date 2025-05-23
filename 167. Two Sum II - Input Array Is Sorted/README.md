# 167. Two Sum II - Input Array Is Sorted

> 🟠 **Difficulty:** Medium

---

## Problem Description

Given a **1-indexed** array of integers `numbers` that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be `numbers[index1]` and `numbers[index2]` where `1 <= index1 < index2 <= numbers.length`.

Return the indices of the two numbers, `index1` and `index2`, **added by one** as an integer array `[index1, index2]` of length 2.

You **may not use the same element twice**. Your solution must use **only constant extra space**.

---

## Input

- `numbers`: A sorted list of integers with length `2 <= numbers.length <= 3 * 10^4`
- `target`: An integer, `-1000 <= target <= 1000`

---

## Output

- A list of two integers `[index1, index2]` representing the 1-based indices of the two numbers that add up to `target`.

---

## ✅ Example 1

**Input:**  
`numbers = [2,7,11,15], target = 9`

**Output:**  
`[1,2]`

**Explanation:**  
The sum of 2 and 7 is 9. Indices are 1 and 2.

---

## ✅ Example 2

**Input:**  
`numbers = [2,3,4], target = 6`

**Output:**  
`[1,3]`

**Explanation:**  
The sum of 2 and 4 is 6. Indices are 1 and 3.

---

## ✅ Example 3

**Input:**  
`numbers = [-1,0], target = -1`

**Output:**  
`[1,2]`

**Explanation:**  
The sum of -1 and 0 is -1. Indices are 1 and 2.

---

## 💡 Approach

- Use two pointers, `l` starting at the beginning and `r` at the end of the array.
- Calculate the sum of `numbers[l] + numbers[r]`.
- If the sum equals `target`, return `[l+1, r+1]` (1-indexed).
- If the sum is greater than the target, move `r` one step left to reduce the sum.
- If the sum is less than the target, move `l` one step right to increase the sum.
- Repeat until the pair is found.

This works efficiently since the array is sorted, and uses only constant extra space.

---

## Edge Cases

- The input array has exactly two elements.
- Negative numbers and zero in the array.
- The guaranteed existence of exactly one solution means no need to handle no-solution cases.

---