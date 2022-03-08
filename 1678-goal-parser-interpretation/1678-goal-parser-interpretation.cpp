class Solution {
public:
    string interpret(string command) {
        int n =0;
        string s;
        
        while(n<command.size())
        {
            if(command[n] == 'G')
            {
                s.push_back('G');
                n++;
            }
            if(command[n] == '(')
            {
                if(command[n+1] == ')')
                {
                    s.push_back('o');
                    n +=2;
                }
                else
                {
                    s.push_back('a');
                    s.push_back('l');
                    n +=4;
                }
            }
        }
        
        return s;
        
    }
};