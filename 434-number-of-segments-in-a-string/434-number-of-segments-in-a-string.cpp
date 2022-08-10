class Solution {
public:
    int countSegments(string s) {
        int seg=1,f;
        if(s[0] == ' ')
            seg=0;

        if(s.size() == 0)
            return 0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i] == ' ' & s[i+1] != ' ')
                seg++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i] !=' ')
                f=1;
                
        }
        if(f)
            return seg;
        else
            return 0;
    }
};