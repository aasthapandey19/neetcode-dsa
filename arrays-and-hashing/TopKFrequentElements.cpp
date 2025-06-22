// do quickselect to find the kth largest element in an array.


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>>sz(nums.size()+1);
        unordered_map<int,int>mp;
        for(auto x:nums)mp[x]++; 
        for(auto x:mp){
            sz[x.second].push_back(x.first);
        }
        vector<int>result;
        for(int i=nums.size();i>=0;--i){
            while(k>0 && sz[i].size()!=0){
                int j= sz[i].size()-1;
                result.push_back(sz[i][j]);
                sz[i].pop_back();
                k--;
            }
        }
        return result;
    }
};
// Time Complexity: O(n + k), where n is the number of elements in the input array and k is the number of unique elements.
// Space Complexity: O(n), where n is the number of elements in the input array.
//could have used heap time complexity O(nlogk) and space complexity O(k) but this is better in terms of space and time complexity
// This code finds the k most frequent elements in an array using a bucket sort-like approach.
// It first counts the frequency of each element using an unordered map, then organizes elements into buckets based on their frequencies.
// Finally, it collects the k most frequent elements from the buckets in reverse order of frequency.    
