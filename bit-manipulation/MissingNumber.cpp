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

 class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int value=0;
        sort(nums.begin(),nums.end());
        int low=0;
        int high=nums.size()-1;
        int mid=0;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==mid){
                low=mid+1;
            }
            else high=mid-1;
        }
        return low;
    }
};
// Time Complexity: O(n log n) due to sorting
// Space Complexity: O(1) as we are not using any extra space apart from a few variables
// Alternative approaches:      
// 1. Brute Force: Iterate through numbers from 0 to n and check if each number is present in the array. This would take O(n^2) time.
// 2. Hashing: Use a hash set to store the numbers and then check for the missing number. This would take O(n) time and O(n) space.
// 3. Mathematical Formula: Use the formula for the sum of the first n natural numbers, which is n*(n+1)/2. Calculate the expected sum and subtract the actual sum of the array. This would take O(n) time and O(1) space.
// 4. XOR Method: Use the XOR operation to find the missing number. This would take O(n) time and O(1) space. The idea is to XOR all the numbers from 0 to n and also XOR all the numbers in the array. The result will be the missing number since XORing a number with itself results in 0.               
// 5. Binary Search: If the array is sorted, use binary search to find the missing number, which is similar to the provided solution but can be more efficient in terms of time complexity.