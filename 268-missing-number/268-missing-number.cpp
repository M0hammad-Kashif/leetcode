class Solution {
public:
    int missingNumber(vector<int>& nums) {        
        auto max = *max_element(nums.begin(),nums.end());
        auto min = *min_element(nums.begin(),nums.end());
        if(min!=0)
            return 0;
        cout<<min<<endl;
        cout<<max<<endl;
        int sum_exp = (max*(max+1))/2;
        cout<<sum_exp<<endl;
        int sum_gt = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            sum_gt += nums[i];
        }
        
        if(sum_exp == sum_gt)
            return max+1;
        else
            return sum_exp-sum_gt;
        
    }
};