class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0, high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==1) mid++;
            else if (nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else {
                swap(nums[high--],nums[mid]);
            }
        }
    }
};
/*
- first sort with new array O(n) space, O(nlogn ) time
- better , count zero one and 2 in one sweep , then replace all starts with 0 , then 1 then 2 - o(1) space but O(2*n) time

- better , take 3 pointers low mid and high,
replace whereever its 0 to put it forward, if its 1 let it go and if its 2 send it back. if you send 0 to front and 2 to end , 1 will automatically be sorted in middle



*/