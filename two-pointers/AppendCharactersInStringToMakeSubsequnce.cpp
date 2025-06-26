class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0,j=0;
        while(i<s.length() &&j<t.length()){
            if(s[i]==t[j])j++;
            i++;
        }
        return t.length()-j;
    }
};
//// Time Complexity: O(n)
//// Space Complexity: O(1) 
//explanation:
// We use two pointers, one for each string. The first pointer iterates through the string  
// s, and the second pointer iterates through the string t. Whenever we find a character in s that matches the current character in t, we move the pointer for t forward.
// If we reach the end of t, it means we have found all characters of t in 
// s in order, and we return the number of characters left in t that we haven't matched yet.
// If we reach the end of s before matching all characters of t, we return the number   
// of characters left in t that we haven't matched yet, which is t.length() - j.
// This approach ensures that we only traverse each string once, leading to a time complexity of O(n), where n is the length of the longer string. The space complexity is O(1) since we are not using any additional data structures that grow with input size.