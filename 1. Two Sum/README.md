# 1. Two Sum

> 🟢 **Difficulty:** Easy

## Problem Description

Given an array of integers `nums` and an integer `target`, return **indices** of the two numbers such that they add up to the target.

You may assume that each input would have **exactly one solution**, and you may not use the same element twice.

You can return the answer in any order.

---

## Input

- `nums`: List of integers
- `target`: Integer

---

## Output

- A list of two integers representing the indices of the elements that sum to `target`.

---

## ✅ Example 1

**Input:** 

nums = [2, 7, 11, 15], target = 9

**Output:**

[0, 1]

**Explanation:**  
Because `nums[0] + nums[1] == 9`, we return `[0, 1]`.

---

## ✅ Example 2

**Input:**
nums = [3, 2, 4], target = 6

*Output:**
[1, 2]

**Explanation:**  
Because `nums[1] + nums[2] == 6`, we return `[1, 2]`.

---

## Constraints

- `2 <= nums.length <= 10⁴`
- `-10⁹ <= nums[i] <= 10⁹`
- `-10⁹ <= target <= 10⁹`
- Only one valid answer exists.

---

## 💡 Approach

A common and efficient solution involves using a hash map (dictionary) to store values and their corresponding indices while iterating through the array:

1. For each number `x`, compute `target - x`.
2. Check if this value exists in the hash map.
3. If it does, return the current index and the index of the complement from the map.
4. Otherwise, store the number and its index in the hash map.

This approach has **O(n)** time complexity.

---

## Available Solutions

- `Two Sum.py` – Python solution using a hash map.
- `Two Sum.js` – JavaScript solution using a hash map.
- `Two Sum.c` – C solution using a brute-force approach or hash table (depending on version).

---

> 🧪 Feel free to compare different implementations across languages and see how they handle logic and edge cases.
