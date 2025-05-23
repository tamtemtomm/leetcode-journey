# 11. Container With Most Water

> 🟠 **Difficulty:** Medium

---

## Problem Description

You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the `i-th` line are `(i, 0)` and `(i, height[i])`.

Find two lines that, together with the x-axis, form a container such that the container contains the most water.

Return the maximum amount of water a container can store.

**Note:** You may not slant the container.

---

## Input

- `height`: A list of non-negative integers representing the heights of vertical lines.

---

## Output

- An integer representing the **maximum area** of water that the container can store.

---

## ✅ Example 1

**Input:**  
`height = [1,8,6,2,5,4,8,3,7]`

**Output:**  
`49`

---

## ✅ Example 2

**Input:**  
`height = [1,1]`

**Output:**  
`1`

---

## Constraints

- `2 <= height.length <= 10⁵`  
- `0 <= height[i] <= 10⁴`

---

## 💡 Approach

1. Use the two-pointer approach:
   - Initialize two pointers, `left` at the beginning and `right` at the end of the array.
2. Calculate the area between the two lines:
   ```python
   area = min(height[left], height[right]) * (right - left)
3. Update the maximum area if the current one is greater.

4. ove the pointer pointing to the shorter line inward to potentially find a larger area.

5. Repeat until the two pointers meet.


## Available Solutions
- `Container With Most Water.py` – Python two-pointer solution.

- `Container With Most Water.js` – JavaScript implementation using the same logic.

- `Container With Most Water.c` – C version with a loop and area comparisons.

⚠️ Edge cases: arrays with all heights the same, decreasing heights, and when optimal container is not on the boundaries.