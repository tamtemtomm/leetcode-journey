# 21. Merge Two Sorted Lists

> 🟢 **Difficulty:** Easy

---

## Problem Description

You are given the heads of two sorted linked lists `list1` and `list2`.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

---

## Input

- `list1`: Head of the first sorted linked list (can be `None` if empty)
- `list2`: Head of the second sorted linked list (can be `None` if empty)

---

## Output

- The head of the merged sorted linked list.

---

## Examples

**Example 1:**  
Input: `list1 = [1,2,4]`, `list2 = [1,3,4]`  
Output: `[1,1,2,3,4,4]`

---

**Example 2:**  
Input: `list1 = []`, `list2 = []`  
Output: `[]`

---

**Example 3:**  
Input: `list1 = []`, `list2 = [0]`  
Output: `[0]`

---

## Constraints

- The number of nodes in both lists is in the range `[0, 50]`.
- `-100 <= Node.val <= 100`
- Both `list1` and `list2` are sorted in non-decreasing order.

---

## Hint / Approach

Use a dummy node to simplify edge cases and iterate through both lists, appending the smaller current node to the merged list.
