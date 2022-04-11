class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l=0;
        int r=people.size()-1;
        int nBoats=0;
        while(l<=r)
        {
            if(l==r)
            {
                nBoats++;
                break;
            }
            if(people[l]+people[r]<=limit)
            {
                l++;r--;nBoats++;
                
            }
            else{
                r--;nBoats++;
            }
        }
        return nBoats;
        
    }
};