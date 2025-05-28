# 39. Combination Sum

> 🟠 **Difficulty:** Medium  
> 🔁 **Type:** Backtracking + Recursion

---

## 🧩 Problem Description

Given an array of **distinct integers** `candidates` and a target integer `target`, return **all unique combinations** of candidates where the chosen numbers **sum to `target`**.

- You may use the **same number** from candidates **unlimited times**.
- Each combination must be **unique** based on the **frequency** of chosen numbers.
- Combinations can be returned in **any order**.

---

## 📥 Input

- `candidates`: List of distinct positive integers (1 ≤ len(candidates) ≤ 30)
- `target`: A positive integer (1 ≤ target ≤ 40)

## 📤 Output

- A list of all unique combinations where numbers sum to `target`.

---

## ✅ Example 1

**Input:**  
`candidates = [2,3,6,7]`  
`target = 7`

**Output:**  
`[[2,2,3],[7]]`

**Explanation:**  
- 2 can be reused to form `[2,2,3]`  
- 7 itself is a valid combination

---

## ✅ Example 2

**Input:**  
`candidates = [2,3,5]`  
`target = 8`

**Output:**  
`[[2,2,2,2],[2,3,3],[3,5]]`

---

## ✅ Example 3

**Input:**  
`candidates = [2]`  
`target = 1`

**Output:**  
`[]`

---

## 💡 Approach

- We apply **backtracking** to explore all possible paths.
- Maintain a `path` list and `total` sum during recursion.
- At each step:
  - If `total == target`, add a **copy** of the path to the result.
  - If `total > target`, stop recursion (**prune**).
  - Otherwise, continue by reusing the same candidate (`i`) or trying the next ones.

---

## ⏱️ Complexity

- **Time Complexity:** Exponential — explores all valid combinations.
- **Space Complexity:** O(target / min(candidates)) — depth of recursion tree.

---

## 🏷️ Tags

`Backtracking` `DFS` `Recursion` `Combinatorics`

---
