class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int count=0;
        for(auto x:nums){
            if(mp.find(x)!=mp.end())count+=mp[x];
            mp[x]++;
        }
        return count;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)   

// Explanation: The code uses an unordered map to count the occurrences of each number in the input vector `nums`. For each number, it checks how many times it has appeared before and adds that count to the total `count` of good pairs. The final result is returned as the number of good pairs found in the input vector. This approach efficiently counts pairs with a time complexity of O(n) and a space complexity of O(n).
// Note: The unordered_map is used to store the frequency of each number, allowing for quick    
// lookups and updates. The overall algorithm iterates through the input vector once, making it efficient for counting pairs of identical numbers. The use of `find` ensures that we only access the map when the number has been seen before, preventing unnecessary increments.
// The solution is optimal for the problem of counting good pairs in an array, where a good pair is defined as a pair of indices (i, j) such that nums[i] == nums[j] and i < j. The unordered_map allows for efficient counting and retrieval of previously seen numbers, leading to a straightforward implementation of the counting logic. This solution is suitable for competitive programming and real-world applications where performance is critical.