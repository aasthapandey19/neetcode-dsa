class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]!=val)mid++;
            else {
                swap(nums[mid],nums[high--]);
            }
        }
        return high+1;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)       


//preserves order and does o(n) computations
/* this preserves order but does all o(n)+o(not val) computations while above approach does less as only replaces needful  
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};


*/