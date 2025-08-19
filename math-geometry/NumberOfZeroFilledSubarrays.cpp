class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long lcount=0;
        int count=0;
        int start=0;
        while(start<nums.size()){
            if(nums[start]==0){
                count++;
                while(start<nums.size() && nums[start]==0){
                    lcount+=count;
                    count++;
                    start++;
                }
            }
            else {
                count=0;
                start++;
            }

        }
        return lcount;
    }
};

// complexity: O(n)
// space: O(1)
