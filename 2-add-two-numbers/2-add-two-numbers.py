# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        ans = ListNode(val=0,next=None)
        pointer:ListNode = ans
        c =0
        s =0
        
        while(l1 is not None or l2 is not None):
            s = c
            if(l1 is not None):
                s += l1.val
                l1 = l1.next
            if(l2 is not None):
                s += l2.val
                l2 = l2.next
            c = int(s/10)
            pointer.next = ListNode(val=s%10,next=None)
            pointer = pointer.next
        if(c >0):
            pointer.next = ListNode(val=c,next=None)
        return ans.next
        