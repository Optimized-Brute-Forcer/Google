class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return 0;
        int rev=0,n=x;
        while(x)
        {
            int digit=x%10;
            if(rev<INT_MAX/10)
            {
                rev=rev*10+digit;
            }
            x=x/10;
        }
        if(n==rev)
            return true;
        return false;
    }
};