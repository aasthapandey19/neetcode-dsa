class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j])i++;
            j++;
        }
        return i==s.length();
    }
};
// Time Complexity: O(n) // Space Complexity: O(1)
// Explanation: The algorithm uses two pointers to traverse both strings. It checks if characters in `s` appear in `t` in the same order, incrementing the pointer for `s` only when a match is found. The process continues until either string is fully traversed. If all characters of `s` are matched, it returns true.