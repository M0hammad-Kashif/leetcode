class Solution {
public:
    int missingNumber(vector<int>& nums) {        
        int n = nums.size();
        int exp_sum = (n*(n+1))/2;
        int real_sum = 0;
        for(int i=0;i<n;i++)
        {
            real_sum +=nums[i];
        }
        
        return exp_sum - real_sum;
        
    }
};