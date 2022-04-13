class Solution:
    def maxArea(self, height: List[int]) -> int:
        l = 0
        r = len(height)-1
        max_area=0;
        while(l<r):
            max_area = max(max_area,(min(height[r],height[l])*(r-l)))
            
            if(height[r]<height[l]):
                r-=1
            else:
                l+=1
        return max_area
            
        