class Solution {
public:
    int climbStairs(int n) {
        if(n<2) return n;
        int prev2=0,prev1=1;
        
        for(int i=0;i<n;i++)
        {
            int curr=prev1+prev2;
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
};