class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>result(arr.size());
        int n=arr.size();
        result[n-1]=-1;
        int currMax=arr[n-1];
        for(int i=n-2;i>=0;--i){
            result[i]=currMax;
            currMax=max(currMax,arr[i]);
        }
        return result;
    }
};
//// Time Complexity: O(n) // Space Complexity: O(n)
// Explanation: The algorithm iterates through the array from the end to the beginning, keeping track of the maximum element seen so far. It replaces each element with this maximum, except for the last element which is set to -1.