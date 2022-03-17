

class Solution {
public:
    int romanToInt(string s) {
//         Symbol       Value
//          I             1
//          V             5
//          X             10
//          L             50
//          C             100
//          D             500
//          M             1000
        
// Now best approach is to implement it using stack
//         from R to L start doing calculation
    int n = s.size();
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        // need to implement a switch case for convsertion of alphabetical to number
        switch (s[i])
        {
        case 'M':
            st.push(1000);
            break;
        case 'D':
            st.push(500);
            break;
        case 'C':
            st.push(100);
            break;
        case 'L':
            st.push(50);
            break;
        case 'X':
            st.push(10);
            break;
        case 'V':
            st.push(5);
            break;
        case 'I':
            st.push(1);
            break;
        }
        
    }
   

    
    int prev = st.top();
    int res = prev;
    for (int i = 0; i < n-1; i++)
    {   
        prev = st.top();
        st.pop();
        if (prev <= st.top())
        {
            res += st.top();
            

        }
        else
        {
            res -= st.top();
            
        }
    }
    return res;
}
};
