class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int majElem=nums[0];
        int pointer=1;
        while(pointer<nums.size()){
            if(nums[pointer]==majElem)count++;
            else {
                count--;
                if(count==0){
                    majElem=nums[pointer];
                    count=1;
                }
            }
            pointer++;
        }
        return majElem;
    }
};
// Time Complexity: O(n) // Space Complexity: O(1)
// Explanation: The algorithm uses a single pass through the array to find the majority element. It
// maintains a count of the current majority element and switches to a new candidate when the count drops to zero. This ensures that the final candidate is indeed the majority element, as it will have been counted more than half the time in the array.
// Note: The algorithm assumes that a majority element always exists in the input array, as per the problem statement.
// all assumptions while solving the problem:
// 1. The input array `nums` is non-empty.      
// 2. There is always a majority element in the array, meaning an element that appears more than n/2 times, where n is the size of the array.
// 3. The majority element is guaranteed to be present, so no need to handle cases where no majority element exists.
// 4. The input array can contain duplicate elements, but the majority element will be the one that appears most frequently.
// 5. The algorithm does not need to handle negative numbers or specific ranges of values,
// as the problem does not impose any restrictions on the values in the array.
// 6. The algorithm is designed to work efficiently with a time complexity of O(n)  
// and a space complexity of O(1), making it suitable for large input sizes.
// 7. The algorithm uses a single pass through the array, ensuring optimal performance.