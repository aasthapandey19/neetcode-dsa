class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        for(auto x:s)mp[x]++;

        for(auto x:t)mp[x]--;
        for(auto x:mp)if(x.second!=0) return false;
        return true;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)
// // Brute Force: O(nlogn) time complexity by sorting both strings and comparing them. 
// // Space Complexity: O(1) if we ignore the space used by the sorting algorithm.
// // This solution is more efficient than the brute force solution because it uses a hash map to count the frequency of each character in both strings,
// // which allows us to check if the two strings are anagrams in linear time.

// // Note: The unordered_map is used to store the frequency of characters in the first string and then decrement the frequency for characters in the second string.
// // If any character's frequency is not zero after processing both strings, then the two strings are not anagrams.    
// // This solution is efficient and works well for large strings as well.
