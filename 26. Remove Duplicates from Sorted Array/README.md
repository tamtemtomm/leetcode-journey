# 26. Remove Duplicates from Sorted Array

> 🟢 **Difficulty:** Easy

---

## Problem Description

Given an integer array `nums` sorted in non-decreasing order, **remove the duplicates in-place** such that each unique element appears only once. The relative order of the elements should be kept the same. Return the number of unique elements `k`.

After removing the duplicates, the first `k` elements of `nums` should contain the unique elements in their original order. The elements beyond `k` are not important.

---

## Input

- `nums`: List of integers with the following constraints:
  - `1 <= nums.length <= 3 * 10^4`
  - `-100 <= nums[i] <= 100`
  - `nums` is sorted in non-decreasing order.

---

## Output

- An integer `k` representing the number of unique elements in `nums`.
- The first `k` elements of `nums` contain the unique elements.

---

## ✅ Example 1

**Input:**  
`nums = [1,1,2]`

**Output:**  
`2`  
`nums` after modification: `[1,2,_]`

---

## ✅ Example 2

**Input:**  
`nums = [0,0,1,1,1,2,2,3,3,4]`

**Output:**  
`5`  
`nums` after modification: `[0,1,2,3,4,_,_,_,_,_]`

---

## 💡 Approach

1. If `nums` is empty, return 0.  
2. Initialize a pointer `i` at 0, representing the index of the last unique element found.  
3. Iterate through the array with index `j` starting from 1:  
   - If `nums[j]` is different from `nums[i]`, increment `i` and update `nums[i]` to `nums[j]`.  
4. Return `i + 1` as the count of unique elements.

---

## Edge Cases

- Single-element array: return 1.  
- All elements are duplicates: return 1.  
- All elements unique: return length of the array.

---

📌 The array must be modified in place, and extra space usage should be O(1).
