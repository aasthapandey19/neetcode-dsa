class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto x:s){
            if(x=='('||x=='{'||x=='[')st.push(x);
            else {
                if(st.empty()) return false;
                else if(x==')' &&st.top()=='('||x=='}' &&st.top()=='{'||x==']' &&st.top()=='[')st.pop();
                else st.push(x);
            }
        }
        return st.empty();
    }
};
// Time Complexity: O(n), where n is the length of the input string s.
// Space Complexity: O(n), where n is the maximum depth of the stack, which can be at most the length of the input string in the worst case (e.g., when all characters are opening brackets).
// This code checks if a string containing parentheses, brackets, and braces is valid by using a stack to match opening and closing brackets.
// It iterates through each character in the string, pushing opening brackets onto the stack and popping them when a matching closing bracket is found.
// If a mismatch occurs or if the stack is empty when a closing bracket is encountered, it returns false.
// If the stack is empty at the end, it returns true, indicating that all brackets were matched correctly.