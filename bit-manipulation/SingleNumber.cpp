class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int missingNumber=0;
        for(auto x:nums)missingNumber^=x;
        return missingNumber;
    }
};
//brute- map n count . TC: O(n) SC: O(n)
//Better- sort n check if any neighbors ? edge case=end points // TC: O(nlogn) SC: O(1)
// best xor // TC: O(n) SC: O(1)
// xor property: a^a=0, a^0=a, a^b=b^a, a^(b^c)=(a^b)^c