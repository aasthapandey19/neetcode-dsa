class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int follower=0;
        int leader=1;
        while(leader<nums.size()){
            if(nums[follower]!=nums[leader]){
                nums[follower+1]=nums[leader];
                follower++;
            }
            leader++;
        }
        return follower+1;
    }
};
// time complexity: O(n)
// space complexity: O(1)   
