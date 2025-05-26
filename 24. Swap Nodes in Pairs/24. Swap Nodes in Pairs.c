struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *swapPairs(struct ListNode *head)
{
    struct ListNode dummy;
    dummy.val = 0;
    dummy.next = head;

    struct ListNode *before = &dummy;
    struct ListNode *first;
    struct ListNode *second;

    while (before->next && before->next->next)
    {
        first = before->next;
        second = first->next;

        before->next = second;
        first->next = second->next;
        second->next = first;

        before = first;
    }

    return dummy.next;
}