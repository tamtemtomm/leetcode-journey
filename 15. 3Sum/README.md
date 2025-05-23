# 15. 3Sum

> 🟠 **Difficulty:** Medium

---

## Problem Description

Given an integer array `nums`, return all the triplets `[nums[i], nums[j], nums[k]]` such that:

- `i != j`, `i != k`, and `j != k`
- `nums[i] + nums[j] + nums[k] == 0`

The solution set must **not** contain duplicate triplets.

---

## Input

- `nums`: A list of integers with length `3 <= nums.length <= 3000`
- Each element in `nums` satisfies `-10^5 <= nums[i] <= 10^5`

---

## Output

- A list of lists, where each inner list contains three integers `[nums[i], nums[j], nums[k]]` that sum up to zero, without duplicates.

---

## ✅ Example 1

**Input:**  
`nums = [-1,0,1,2,-1,-4]`

**Output:**  
`[[-1,-1,2],[-1,0,1]]`

**Explanation:**  
The triplets that sum to zero are:
- `[-1, -1, 2]`
- `[-1, 0, 1]`

---

## ✅ Example 2

**Input:**  
`nums = [0,1,1]`

**Output:**  
`[]`

**Explanation:**  
No triplet sums to zero.

---

## ✅ Example 3

**Input:**  
`nums = [0,0,0]`

**Output:**  
`[[0,0,0]]`

**Explanation:**  
Only one triplet possible, summing to zero.

---

## 💡 Approach

- Sort the array.
- Iterate over the array, fixing one element at a time.
- Use two pointers (`l` and `r`) to find pairs such that the sum of the fixed element and the pair equals zero.
- Skip duplicates to avoid repeating triplets.
- Collect all unique triplets and return them.

This method ensures all triplets are found with no duplicates, running efficiently with a time complexity of approximately O(n²).

---

## Edge Cases

- Arrays with all zero elements.
- Arrays with no possible triplets.
- Arrays with multiple duplicates.
- Large arrays with a wide range of values.
