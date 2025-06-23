class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            if(mp.find(x)!=mp.end()) return true;
            mp[x]++;
        }
        return false;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)   
// Alternative approaches:

//brute- two nested loop 
//better- sort n check neightbors
//better-make set and compare size with original array
// *used= best make map in one pass