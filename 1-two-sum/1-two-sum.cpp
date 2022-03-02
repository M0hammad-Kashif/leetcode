class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> k ={-1,-1};
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if (nums[i]+nums[j] == target)
                {
                    vector<int> idx = {i,j};
                    return idx;
                }
            }
        }
        return k;
    }
    
};