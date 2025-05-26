# 19. Remove Nth Node From End of List

> 🟠 **Difficulty:** Medium

---

## Problem Description

Given the `head` of a singly linked list, remove the `n`th node from the end of the list and return its head.

---

## Input

- `head`: The head of a singly-linked list.
- `n`: An integer such that `1 <= n <= sz` where `sz` is the length of the list.

Constraints:

- `1 <= sz <= 30`
- `0 <= Node.val <= 100`

---

## Output

- The head of the modified linked list after removing the `n`th node from the end.

---

## ✅ Example 1

**Input:**  
`head = [1,2,3,4,5], n = 2`

**Output:**  
`[1,2,3,5]`

**Explanation:**  
The 2nd node from the end is `4`, which is removed.

---

## ✅ Example 2

**Input:**  
`head = [1], n = 1`

**Output:**  
`[]`

**Explanation:**  
The only node is removed, resulting in an empty list.

---

## ✅ Example 3

**Input:**  
`head = [1,2], n = 1`

**Output:**  
`[1]`

**Explanation:**  
The last node (`2`) is removed.

---

## 💡 Approach

- Use a **dummy node** pointing to the head to simplify edge cases (e.g., deleting the first node).
- Initialize two pointers, `first` and `second`, at the dummy node.
- Move `first` pointer `n + 1` steps ahead so that there is a gap of `n` nodes between `first` and `second`.
- Move both `first` and `second` together until `first` reaches the end.
- Now, `second.next` is the node to be removed. Update `second.next = second.next.next`.
- Return `dummy.next` as the new head of the list.

This approach ensures **one pass** through the list, maintaining **O(n)** time complexity and **O(1)** space complexity.

---

## Edge Cases

- Removing the **only node** in the list.
- Removing the **first node** (e.g., when `n == sz`).
- Handling a list with just **two nodes**.
