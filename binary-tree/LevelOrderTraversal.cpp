/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:    
    void dfs(TreeNode* root, int level, vector<int>temp,vector<vector<int>>&result){
        if(!root){
            return;
        }
        if(result.size()==level) result.push_back({});
        result[level].push_back(root->val);
        dfs(root->left,level+1,temp,result);
        dfs(root->right,level+1,temp,result);
        
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>>result;
        dfs(root,0,{},result);
        return result;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)   // dfs
//BFS implementation
/* 

vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>result;
        while(!q.empty()){
            int sz=q.size();
            vector<int>temp;
            for(int i=0;i<sz;++i){
                TreeNode* node=q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            result.push_back(temp);
        }
        return result;


*/