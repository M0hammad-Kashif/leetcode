class Solution {
public:
    bool isPalindrome(int x) {
    long int rev =0;
    int rem;
    int real = x;
    while(x>0)
    {
        rem = x%10;
        x /= 10;
        rev = rev*10 +rem;
        
        
    }
    if (rev == real)
        return true;
    else
        return false;

        
    }
};