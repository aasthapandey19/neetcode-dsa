/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>matrix(m,vector<int>(n,-1));
        int left=0;
        int right=n-1;
        int up=0;
        int down=m-1;
        int dir=0;
        while(head && left<=right && up<=down){
            if(dir%4==0){
                for(int i=left;i<=right;++i){
                if(head)matrix[up][i]=head->val;
                head=head->next;}
                up++;
                dir++;
            }
            else if(dir%4==1){
                for(int i=up;i<=down;++i){
                    if(head)matrix[i][right]=head->val;
                    head=head->next;
                }
                right--;
                dir++;
            }
            else if(dir%4==2){
                for(int i=right;i>=left;--i){
                    if(head)matrix[down][i]=head->val;
                    head=head->next;
                }
                dir++;
                down--;
            }
            else if(dir%4==3){
                for(int i=down;i>=up;--i){
                    if(head)matrix[i][left]=head->val;
                    head=head->next;
                }
                left++;
                dir++;
            }
        }
        return matrix;
    }
};
// Time Complexity: O(m*n)
// Space Complexity: O(m*n)
// This code fills a matrix in spiral order with values from a linked list.