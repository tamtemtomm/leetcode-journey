/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *createNode(int val)
{
    struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode dummy;
    struct ListNode *current = &dummy;
    dummy.next = NULL;

    int carry = 0;

    while (l1 || l2 || carry != 0)
    {
        int val1 = l1 ? l1->val : 0;
        int val2 = l2 ? l2->val : 0;

        int sum = val1 + val2 + carry;
        carry = sum / 10;
        int digit = sum % 10;

        current->next = createNode(digit);
        current = current->next;

        if (l1)
            l1 = l1->next;
        if (l2)
            l2 = l2->next;
    }

    return dummy.next;
}