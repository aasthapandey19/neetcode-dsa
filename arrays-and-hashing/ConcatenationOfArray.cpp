class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>result(2*nums.size());
        int n=nums.size();
        for(int i=0;i<n;++i){
            result[i]=nums[i];
            result[n+i]=nums[i];
        }
        return result;
    }
};