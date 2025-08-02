class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        long long answer=0;
        int n=nums.size()/3;
        sort(nums.begin(),nums.end());
        for(int i= nums.size()-2;i>=0,n>0;i=i-2,n--)answer+=nums[i];
        return answer;
    }
};