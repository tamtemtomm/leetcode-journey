# 34. Find First and Last Position of Element in Sorted Array

> 🟠 **Difficulty:** Medium  
> 🕓 **Time Complexity:** O(log n)

---

## Problem Description

Given an array of integers `nums` sorted in **non-decreasing order**, find the **starting and ending** position of a given `target` value.

If `target` is not found in the array, return `[-1, -1]`.

You must write an algorithm with **O(log n)** runtime complexity.

---

## Input

- `nums`: List of integers sorted in non-decreasing order.
- `target`: Integer value to search for.

**Constraints:**
- `0 <= nums.length <= 10^5`
- `-10^9 <= nums[i], target <= 10^9`
- `nums` is a non-decreasing array.

---

## Output

- A list of two integers representing the **first and last** index of the `target` in `nums`.
- If not found, return `[-1, -1]`.

---

## ✅ Example 1

**Input:**  
`nums = [5,7,7,8,8,10]`  
`target = 8`

**Output:**  
`[3, 4]`

---

## ✅ Example 2

**Input:**  
`nums = [5,7,7,8,8,10]`  
`target = 6`

**Output:**  
`[-1, -1]`

---

## ✅ Example 3

**Input:**  
`nums = []`  
`target = 0`

**Output:**  
`[-1, -1]`

---

## 💡 Approach

- Use **two binary search functions**:
  1. `searchLeft()` – finds the leftmost (first) index of the target.
  2. `searchRight()` – finds the rightmost (last) index of the target.
- After locating both indices, validate that the target exists in the range.

### Why Binary Search Twice?

Binary search finds the **position** of a value in O(log n).  
By tweaking the logic:
- We push the boundaries to the **left** when looking for the start,
- and to the **right** when looking for the end.

---