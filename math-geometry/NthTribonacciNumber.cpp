class Solution {
public:
    int tribonacci(int n) {
        if(n<2) return n;
        if(n==2) return 1;
        vector<int>dp(n+1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        
        for(int i=3;i<=n;++i){
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n];
    }
};
// Time Complexity: O(n) where n is the input number.
// Space Complexity: O(n) for the dp array used to store the tribonacci numbers.
/*
another way - a=0, b=1, c=1;
loop 3:n
 curr=a+b+c;
 a=b;   
    b=c;
    c=curr;
return c;
// Time Complexity: O(n) where n is the input number.
// Space Complexity: O(1) since we are using only a constant amount of space for
*/