class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>result(n+1);
        result[0]=0;
        for(int i=1;i<=n;++i)
        result[i]=result[i/2]+i%2;
        return result;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)
// Alternative approaches:
// 1. Brute Force: Count bits for each number from 0 to n using a loop and bitwise operations. This would take O(n * log n) time.
// 2. Dynamic Programming: Use a DP array where dp[i] = dp[i >> 1] + (i & 1). This is similar to the provided solution but can be more verbose.
// 3. Bit Manipulation: Use bit manipulation techniques to count bits, but this would still lead to O(n) complexity.
// 4. Lookup Table: Precompute the number of bits for all numbers up to a