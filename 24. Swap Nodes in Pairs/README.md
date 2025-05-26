# 24. Swap Nodes in Pairs

> 🟠 **Difficulty:** Medium

---

## Problem Description

Given a linked list, swap every two adjacent nodes and return its head.  
You must solve the problem **without modifying the values** in the list's nodes (i.e., only nodes themselves may be changed).

---

## Input

- `head`: The head of a singly-linked list.

Constraints:

- The number of nodes in the list is in the range `[0, 100]`.
- `0 <= Node.val <= 100`

---

## Output

- The head of the modified linked list where every two adjacent nodes have been swapped.

---

## ✅ Example 1

**Input:**  
`head = [1,2,3,4]`

**Output:**  
`[2,1,4,3]`

**Explanation:**  
Pairs (1,2) and (3,4) are swapped.

---

## ✅ Example 2

**Input:**  
`head = []`

**Output:**  
`[]`

**Explanation:**  
Empty list, nothing to swap.

---

## ✅ Example 3

**Input:**  
`head = [1]`

**Output:**  
`[1]`

**Explanation:**  
Only one node, no swap needed.

---

## ✅ Example 4

**Input:**  
`head = [1,2,3]`

**Output:**  
`[2,1,3]`

**Explanation:**  
Only one pair (1,2) is swapped, node 3 remains as-is.

---

## 💡 Approach

- Use a **dummy node** pointing to the head to simplify edge case handling.
- Maintain a pointer `before` initialized at the dummy node.
- While there are at least two nodes ahead:
  - Identify the `first` and `second` nodes to be swapped.
  - Perform the swap by updating pointers:
    - `before.next = second`
    - `first.next = second.next`
    - `second.next = first`
  - Move `before` two steps forward to `first`.
- Return `dummy.next` as the new head.

This approach ensures **in-place node swapping** with **O(n)** time complexity and **O(1)** space complexity.

---

## Edge Cases

- Empty list.
- List with only one node.
- List with an odd number of nodes (last node remains unchanged).
