class Solution {
public:
    long long maxArea(vector<int>& height) {
        long long int l=0;
        long long int r=height.size()-1;
        long long int max_area=0;
        while(l<r)
        {   
            max_area = max(max_area,(min(height[l],height[r]))*(r-l));
            
            if(height[l]<height[r])
                l++;
            else
                r--;
        }
        return max_area;
        
    }
};