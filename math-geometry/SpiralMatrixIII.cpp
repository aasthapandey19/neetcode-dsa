class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
                vector<vector<int>> res={{rStart,cStart}};
                int dx=0,dy=1,tmp;
                for(int n=0;res.size()<rows*cols;n++){
                    for(int i=0;i<n/2+1;i++){
                        rStart+=dx;cStart+=dy;
                        if(0<=rStart && rStart<rows && 0<=cStart && cStart<cols)
                        res.push_back({rStart,cStart});
                    }
                    tmp=dx;
                    dx=dy;
                    dy=-tmp;
                }   
                return res;
    }
};
// Time Complexity: O(rows * cols)
// Space Complexity: O(rows * cols) 
//explanation of direction alteration:
// The code uses a direction vector (dx, dy) to control the movement in the matrix
// and alternates the direction after completing a full cycle of movements.
// Initially, it moves right (dx=0, dy=1), then down (dx=1, dy=0), left (dx=0, dy=-1), and up (dx=-1, dy=0).
// The direction is altered by swapping dx and dy and negating the new dy after each full cycle of movements.
// The outer loop runs until the result vector contains all elements of the matrix, ensuring that the spiral traversal continues until all cells are filled.
// The inner loop iterates through the current direction, adding valid positions to the result vector.
