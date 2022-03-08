class Solution {
public:
    bool checkRecord(string s) {
        string L = "LLL";
        int found = s.find(L);
        if(found >= 0)
        {   
            return false;

        }else
        {
            int flag = 0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i] == 'A')
                {
                    flag++;
                    if(flag>=2)
                        return false;
                }
                    
            }
            return true;
            
        }
        
    }
};