# 2. Add Two Numbers

> 🟠 **Difficulty:** Medium

---

## Problem Description

You are given two **non-empty linked lists** representing two **non-negative integers**. The digits are stored in **reverse order**, and each of their nodes contains a **single digit**. Add the two numbers and return the sum as a linked list.

You may assume the two numbers **do not contain any leading zero**, except the number 0 itself.

---

## Input

- `l1`: The head node of the first linked list.
- `l2`: The head node of the second linked list.

Each node contains:
- `val`: A single digit (0–9)
- `next`: Reference to the next node (or `None`)

---

## Output

- A linked list representing the sum of the two numbers. The result is also in reverse order.

---

## ✅ Example 1

**Input:**  
l1 = [2, 4, 3], l2 = [5, 6, 4]  
**Output:**  
[7, 0, 8]  
**Explanation:**  
342 + 465 = 807.

---

## ✅ Example 2

**Input:**  
l1 = [0], l2 = [0]  
**Output:**  
[0]

---

## ✅ Example 3

**Input:**  
l1 = [9, 9, 9, 9, 9, 9, 9], l2 = [9, 9, 9, 9]  
**Output:**  
[8, 9, 9, 9, 0, 0, 0, 1]

---

## Constraints

- The number of nodes in each linked list is in the range [1, 100].
- `0 <= Node.val <= 9`
- The input lists represent a number with no leading zeros.

---

## 💡 Approach

To add two numbers represented by linked lists:

1. Use a dummy node to simplify result list construction.
2. Traverse both lists simultaneously:
   - Add corresponding digits from `l1` and `l2`, along with any `carry` from the previous step.
   - Store the resulting digit in the current node.
   - Update the carry for the next iteration.
3. If there's a remaining carry after the loop, append a final node.

This solution runs in **O(max(n, m))** time, where `n` and `m` are the lengths of the input linked lists.

---

## Available Solutions

- `Add Two Numbers.py` – Python solution using a dummy node and digit-by-digit addition.
- `Add Two Numbers.js` – JavaScript solution using linked list traversal.
- `Add Two Numbers.c` – C solution using struct-based node manipulation.

---

> 🧪 Try adding more edge cases like lists of different lengths or when the final sum results in an extra digit (e.g., 999 + 1).
