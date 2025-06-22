class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for (const string& op : operations) {
            if (op == "C") {
                if (!st.empty()) st.pop();  // remove last valid score
            }
            else if (op == "D") {
                if (!st.empty()) st.push(2 * st.top());  // double last valid score
            }
            else if (op == "+") {
                int top = st.top(); st.pop();
                int secondTop = st.top();
                st.push(top);  // push top back before adding
                st.push(top + secondTop);  // push sum of last two scores
            }
            else {
                st.push(stoi(op));  // numeric score
            }
        }

        int result = 0;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        return result;
    }
};
//complexity: O(n) time, O(n) space
// where n is the number of operations in the input vector. 