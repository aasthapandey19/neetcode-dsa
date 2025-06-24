class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string s="";
        while(i<word1.length()||j<word2.length()){
            if(i<word1.length()){
                s+=word1[i++];
            }
            if(j<word2.length()){
                s+=word2[j++];
            }
        }
        return s;
    }
};
// Time Complexity: O(n + m) where n is the length of word1 and m is the length of word2.
// Space Complexity: O(n + m) for the resulting string. 
// This solution uses a two-pointer technique to merge the two strings alternately. The pointers i and j traverse