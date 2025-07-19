class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>solution(n,vector<int>(n));
        int left=0;
        int right=n-1;
        int up=0;
        int down=n-1;
        int dir=0;
        int count=1;
        while(left<=right && up<=down){
            if(dir%4==0){
                for(int i=left;i<=right;++i)solution[up][i]=count++;
                up++;
                dir++;
            }
            else if(dir%4==1){
                for(int i=up;i<=down;++i)solution[i][right]=count++;
                right--;
                dir++;
            }
            else if(dir%4==2){
                for(int i=right;i>=left;--i)solution[down][i]=count++;
                down--;
                dir++;
            }
            else {
                for(int i=down;i>=up;--i)solution[i][left]=count++;
                left++;
                dir++;
            }
        }
        return solution;
    }
};
// Time Complexity: O(n^2)
// Space Complexity: O(n^2)     