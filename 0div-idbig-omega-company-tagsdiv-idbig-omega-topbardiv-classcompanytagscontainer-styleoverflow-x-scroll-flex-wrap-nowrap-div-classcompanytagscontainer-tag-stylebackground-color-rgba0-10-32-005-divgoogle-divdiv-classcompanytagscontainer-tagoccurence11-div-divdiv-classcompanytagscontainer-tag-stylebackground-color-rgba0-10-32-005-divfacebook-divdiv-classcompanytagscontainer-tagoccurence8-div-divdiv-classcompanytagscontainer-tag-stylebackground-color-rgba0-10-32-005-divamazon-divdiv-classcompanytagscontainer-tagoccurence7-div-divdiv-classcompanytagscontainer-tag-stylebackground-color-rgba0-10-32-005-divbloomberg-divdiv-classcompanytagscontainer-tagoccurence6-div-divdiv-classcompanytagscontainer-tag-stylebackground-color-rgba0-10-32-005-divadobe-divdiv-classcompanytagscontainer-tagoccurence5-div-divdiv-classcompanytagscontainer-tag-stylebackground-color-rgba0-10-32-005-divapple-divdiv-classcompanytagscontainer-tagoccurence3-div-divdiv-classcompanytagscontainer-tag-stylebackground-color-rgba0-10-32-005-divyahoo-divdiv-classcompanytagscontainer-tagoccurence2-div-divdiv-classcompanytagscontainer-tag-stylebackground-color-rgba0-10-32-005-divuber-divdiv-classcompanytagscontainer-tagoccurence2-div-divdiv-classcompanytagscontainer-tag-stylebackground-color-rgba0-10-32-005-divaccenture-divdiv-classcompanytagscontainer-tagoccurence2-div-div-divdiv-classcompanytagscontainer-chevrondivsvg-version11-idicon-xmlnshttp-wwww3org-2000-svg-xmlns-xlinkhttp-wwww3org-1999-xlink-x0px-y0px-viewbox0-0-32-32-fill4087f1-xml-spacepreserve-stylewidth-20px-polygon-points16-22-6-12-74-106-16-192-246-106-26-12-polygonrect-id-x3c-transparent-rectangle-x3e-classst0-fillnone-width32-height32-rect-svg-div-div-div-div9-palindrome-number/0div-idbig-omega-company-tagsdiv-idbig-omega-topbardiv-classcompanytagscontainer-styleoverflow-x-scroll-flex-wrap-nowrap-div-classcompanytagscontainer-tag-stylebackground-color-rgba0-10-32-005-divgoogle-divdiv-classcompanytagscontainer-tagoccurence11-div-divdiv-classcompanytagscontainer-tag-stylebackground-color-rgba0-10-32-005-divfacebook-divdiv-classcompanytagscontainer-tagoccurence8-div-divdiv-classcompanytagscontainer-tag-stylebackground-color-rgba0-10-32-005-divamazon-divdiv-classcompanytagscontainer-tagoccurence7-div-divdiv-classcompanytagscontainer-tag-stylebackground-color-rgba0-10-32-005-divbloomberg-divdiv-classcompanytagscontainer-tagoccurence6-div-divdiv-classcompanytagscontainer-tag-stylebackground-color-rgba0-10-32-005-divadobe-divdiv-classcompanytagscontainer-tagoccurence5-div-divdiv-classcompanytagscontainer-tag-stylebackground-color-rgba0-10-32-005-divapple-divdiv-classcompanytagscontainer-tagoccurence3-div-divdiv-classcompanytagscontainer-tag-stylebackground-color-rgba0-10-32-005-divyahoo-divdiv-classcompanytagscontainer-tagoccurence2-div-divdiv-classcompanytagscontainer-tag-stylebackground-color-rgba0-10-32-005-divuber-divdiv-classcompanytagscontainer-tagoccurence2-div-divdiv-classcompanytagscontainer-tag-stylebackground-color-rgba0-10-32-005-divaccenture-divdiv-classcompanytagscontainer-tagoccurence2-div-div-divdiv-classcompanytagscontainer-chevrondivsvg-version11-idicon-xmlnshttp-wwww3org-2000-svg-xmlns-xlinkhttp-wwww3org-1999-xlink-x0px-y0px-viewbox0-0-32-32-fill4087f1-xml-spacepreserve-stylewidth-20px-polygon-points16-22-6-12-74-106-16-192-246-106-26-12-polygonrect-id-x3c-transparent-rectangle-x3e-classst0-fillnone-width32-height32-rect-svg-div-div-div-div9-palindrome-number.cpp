class Solution {
public:
    bool isPalindrome(int x)
    {
        if(x<0) return false;
        
        long long dummy = x;
        long long reverse = 0;
        
        while(dummy != 0)
        {
            long long last = dummy%10;
            dummy /= 10;
            reverse = (reverse*10) + last;
        }
        
        if(x == reverse) return true;
        return false;
    }
};