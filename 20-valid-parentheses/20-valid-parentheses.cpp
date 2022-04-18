class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<int> stk;
        for(int i=0;i<n;i++)
        {   
            //pushing all the element first
            if(s[i]=='(')
                stk.push(s[i]);
            else if(s[i]=='{')
                stk.push(s[i]);
            else if(s[i]=='[')
                stk.push(s[i]);
            else if(s[i]==')')
            {       if(!stk.empty() && stk.top() == '(' )
                        stk.pop();
                    else
                        return false;
            }
            else if(s[i]=='}')
            {       if(!stk.empty() && stk.top() == '{' )
                        stk.pop();
                    else
                        return false;
            }
            else if(s[i]==']')
            {       if(!stk.empty() && stk.top() == '[' )
                        stk.pop();
                    else
                        return false;
            }       
        }
        return stk.empty();
    }
};