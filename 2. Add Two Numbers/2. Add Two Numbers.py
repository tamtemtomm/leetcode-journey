# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        l1_val, l2_val, i = 0, 0, 0

        while(True) : 
            l1_val += (l1.val * (10 ** i))
            
            if (l1.next is None) :  
                break

            l1 = l1.next
            i = i + 1

        i = 0

        while(True) : 
            l2_val += (l2.val * (10** i))
            
            if (l2.next is None) :  
                break

            l2 = l2.next
            i = i + 1
        
        dummy = ListNode()
        current = dummy
        for value in [c for c in str(l1_val + l2_val)][::-1]:
            current.next = ListNode(int(value))
            current = current.next

        return dummy.next
        