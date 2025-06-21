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
// every push_back in vector will make new array and copy the old array to new array . therefore it is not efficient
// Time Complexity: O(n)
// Space Complexity: O(n)

