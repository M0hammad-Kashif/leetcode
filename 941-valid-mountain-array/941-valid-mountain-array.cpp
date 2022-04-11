class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int len = arr.size();
        if(len<3)
            return false;
        
        int i=1;
        while(i<len && arr[i]>arr[i-1])        
            i++;        
        if(i==1 || i==len)  
            return false;
        while(i<len && arr[i]<arr[i-1])
            i++;
        return i==len;
        
        
    }
};