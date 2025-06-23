class Solution {
public:
    char findTheDifference(string s, string t) {
       char x= 0;
       for(auto y:s)x=x^y;
       for(auto y:t)x=x^y;
       return x;
    }
};
// Time Complexity: O(n), where n is the length of the longer string (t). We iterate through both strings once.
// Space Complexity: O(1), as we are using a constant amount of space for the variable x.
// This solution uses the XOR operation to find the character that is different between the two strings.
/*
 unordered_map<char,int>mp;
        for(auto x:t)mp[x]++;
        for(auto x:s)mp[x]--;
        for(auto x:mp) if(x.second!=0) return x.first;
        return ' ';*/