# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:

        dummy = ListNode(0, head)
        before = dummy

        while before.next and before.next.next:
            first = before.next
            second = first.next

            before.next = second
            first.next = second.next
            second.next = first

            before = first
        
        return dummy.next