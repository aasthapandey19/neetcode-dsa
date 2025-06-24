class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0;
        int end=numbers.size()-1;
        while(start<end){
            if(numbers[start]+numbers[end]==target) return {start+1,end+1};
            else if(numbers[start]+numbers[end]>target)end--;
            else start++;
        }   
        return {-1,-1};
    }
};
// Time Complexity: O(n) where n is the number of elements in the vector.
// Space Complexity: O(1) since we are using constant space for pointers.
// This solution uses a two-pointer technique to efficiently find the indices of two numbers that add up        
// to the target value in a sorted array. The two-pointer approach is optimal for this problem as it avoids the need for nested loops, resulting in linear time complexity.
// A brute-force solution would involve checking all pairs of numbers, which would take O(n^2) time.
// The two-pointer technique is particularly effective here because the input array is sorted, allowing us to       
// eliminate possibilities quickly by adjusting the pointers based on the sum of the current pair of numbers.