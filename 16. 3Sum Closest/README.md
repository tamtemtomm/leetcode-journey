# 16. 3Sum Closest

> 🟠 **Difficulty:** Medium

---

## Problem Description

Given an integer array `nums` of length `n` and an integer `target`, find three integers in `nums` such that the sum is **closest** to `target`.

Return the **sum** of the three integers.

You may assume that **each input has exactly one solution**.

---

## Input

- `nums`: A list of integers with length `3 <= nums.length <= 500`
- Each element in `nums` satisfies `-1000 <= nums[i] <= 1000`
- `target`: An integer where `-10^4 <= target <= 10^4`

---

## Output

- An integer representing the sum of the three integers that is closest to the target.

---

## ✅ Example 1

**Input:**  
`nums = [-1,2,1,-4], target = 1`

**Output:**  
`2`

**Explanation:**  
The sum that is closest to the target is `2` (from `-1 + 2 + 1`).

---

## ✅ Example 2

**Input:**  
`nums = [0,0,0], target = 1`

**Output:**  
`0`

**Explanation:**  
The closest sum to 1 is `0` (from `0 + 0 + 0`).

---

## 💡 Approach

- Sort the array to allow efficient two-pointer traversal.
- Iterate through the array with index `i`:
  - Use two pointers `l` and `r` (left and right) to find pairs such that the sum with `nums[i]` is closest to the target.
  - Calculate the current sum and compare it with the best (closest) sum found so far.
  - If `cur_sum` is closer to `target` than `closest_sum`, update `closest_sum`.
  - Move the pointers:
    - If `cur_sum < target`, move the left pointer to increase the sum.
    - If `cur_sum > target`, move the right pointer to decrease the sum.
    - If `cur_sum == target`, return the target immediately since it's the best possible answer.

Time complexity is **O(n²)** due to nested iteration and two-pointer traversal, which is efficient for `n <= 500`.

---

## Edge Cases

- Array has all zero elements.
- Target is outside the range of the array's total minimum or maximum possible sum.
- Array contains negative numbers or a mix of negative and positive numbers.
