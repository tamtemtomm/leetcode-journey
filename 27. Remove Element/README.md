# 27. Remove Element

> 🟢 **Difficulty:** Easy

---

## Problem Description

Given an integer array `nums` and an integer `val`, **remove all occurrences of `val` in `nums` in-place**. The order of the elements may be changed. Return the number of elements in `nums` which are **not equal to** `val`.

After removing all occurrences of `val`, the first `k` elements of `nums` should contain the elements not equal to `val`. The elements beyond `k` are not important.

---

## Input

- `nums`: List of integers with constraints:
  - `0 <= nums.length <= 100`
  - `0 <= nums[i] <= 50`
- `val`: Integer value to remove from `nums` with constraints:
  - `0 <= val <= 100`

---

## Output

- An integer `k` representing the number of elements in `nums` that are not equal to `val`.
- The first `k` elements of `nums` contain the elements not equal to `val`.

---

## ✅ Example 1

**Input:**  
`nums = [3,2,2,3], val = 3`

**Output:**  
`2`  
`nums` after modification: `[2,2,_,_]`

**Explanation:**  
The first two elements are `2`, and the order beyond `k` is not important.

---

## ✅ Example 2

**Input:**  
`nums = [0,1,2,2,3,0,4,2], val = 2`

**Output:**  
`5`  
`nums` after modification: `[0,1,4,0,3,_,_,_]`

**Explanation:**  
The first five elements are `0, 1, 4, 0, 3` in any order. Elements beyond the first five are irrelevant.

---

## 💡 Approach

1. If `nums` is empty, return 0.  
2. Initialize a pointer `i` at 0 to track the position of the next non-`val` element.  
3. Iterate through the array with index `j`:  
   - If `nums[j]` is not equal to `val`, assign `nums[i] = nums[j]` and increment `i`.  
4. Return `i` as the count of elements not equal to `val`.

---

## Edge Cases

- Empty array: return 0.  
- All elements equal to `val`: return 0.  
- No elements equal to `val`: return length of array.

---

📌 The array must be modified in place with O(1) extra memory.
