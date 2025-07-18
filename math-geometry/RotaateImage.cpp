class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();++i){
        for(auto j=0;j<=i;++j){
        swap(matrix[i][j],matrix[j][i]);}}
        for(int i=0;i<matrix.size();++i)
        reverse(matrix[i].begin(),matrix[i].end());
        
    }
};
// Time Complexity: O(n*m)
// Space Complexity: O(1)   
// This code rotates a square matrix 90 degrees clockwise in place. 
// It first transposes the matrix and then reverses each row to achieve the rotation.