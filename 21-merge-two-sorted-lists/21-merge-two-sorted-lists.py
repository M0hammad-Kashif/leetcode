# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# from heapq import merge
class Solution:
    def mergeTwoLists(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        p = ListNode(0)
        ans = p
        
        while(l1 and l2):
            if(l1.val > l2.val):
                p.next = l2
                l2 = l2.next
            else:
                p.next = l1
                l1 = l1.next
            p = p.next
        
        while(l1):
            p.next = l1
            l1 = l1.next
            p = p.next
        while(l2):
            p.next = l2
            l2 = l2.next
            p = p.next
            
        return ans.next