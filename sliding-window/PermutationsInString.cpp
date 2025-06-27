class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length()) return false;
        vector<int>mp1(26,0);
        for(auto x:s1)mp1[x-'a']++;
        vector<int>mp2(26,0);
        int len=s1.length();
        for(int i=0;i<len;i++)mp2[s2[i]-'a']++;
        if(mp1==mp2) return true;
        int pointer=0;
        for(int i=len;i<s2.length();i++){
            mp2[s2[pointer++]-'a']--;
            mp2[s2[i]-'a']++;
            if(mp1==mp2) return true;
        }
        return false;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)       
// Explanation:
// 1. We first check if the length of s2 is less than s1.   
//    If it is, we return false because s1 cannot be a permutation of s2.
// 2. We create two frequency arrays, mp1 and mp2, to count the occurrences of each character in s1 and the first len characters of s2, respectively.
// 3. We compare the two frequency arrays. If they are equal, it means that the first len characters of s2 contain a permutation of s1, and we return true.
// 4. We then slide a window of size len over s2. For each new character added to the window, we decrement the count of the character that is sliding out of the window and increment the count of the new character that is sliding into the window.
// 5. After updating the frequency array for the new window, we again check if mp1 and mp2 are equal. If they are, we return true.
// 6. If we finish sliding through s2 without finding any permutation of s1, we return false.