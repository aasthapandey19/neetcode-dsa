// works in O(2n) , no space but can be done better
/**  
 * class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int value=0;
        for(auto x:nums){
            value=value^x;
        }
        for(auto i=1;i<=nums.size();++i)value=value^i;
        return value;
    }
};
 
 */