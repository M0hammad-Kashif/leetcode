class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        from heapq import merge
        res = list(merge(nums1,nums2))
        if(len(res)%2 == 1):
            return res[int(len(res)/2)] + 0.0
        else:
            return (res[int(len(res)/2)] +res[int(len(res)/2)-1] + 0.0)/2