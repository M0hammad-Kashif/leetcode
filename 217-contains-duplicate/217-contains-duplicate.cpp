class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // vector<long long int> h(*max_element(nums.begin(),nums.end()),0);
        // for(int i=0;i<nums.size();i++)        
        //     h[nums[i] + 1000000000]++;
        // int m = *max_element(h.begin(),h.end());
        // if(m>1)
        //     return true;
        // else
        //     return false;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i] >= nums[i+1])
                return true;
        }
        return false;
    }
};