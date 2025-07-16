class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>solution;
        int left=0;
        int right=matrix[0].size()-1;
        int up=0;
        int down=matrix.size()-1;
        int dir=0;
        while(left<=right && up<=down){
            if(dir%4==0){
                for(int i=left;i<=right;++i)solution.push_back(matrix[up][i]);
                up++;
                dir++;
            }
            else if(dir%4==1){
                for(int i=up;i<=down;++i)solution.push_back(matrix[i][right]);
                right--;
                dir++;
            }
            else if(dir%4==2){
                for(int i=right;i>=left;--i)solution.push_back(matrix[down][i]);
                down--;
                dir++;
            }
            else {
                for(int i=down;i>=up;--i)solution.push_back(matrix[i][left]);
                left++;
                dir++;
            }
        }
        return solution;
    }
};