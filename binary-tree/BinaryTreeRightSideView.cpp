//BFS

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
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int>result;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;++i){
                TreeNode* temp=q.front();
                q.pop();
                if(i==sz-1) result.push_back(temp->val);
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                
            }
        }
        return result;
    }
};


-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// DFS


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
    void helper(TreeNode* root, int level, vector<int>&result){
        if(!root) return ;
        if(level==result.size()) result.push_back(-1000);
        result[level]=root->val;
        helper(root->left,level+1,result);
        helper(root->right,level+1,result);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>result;
        if(!root) return result;
        helper(root,0,result);
        return result;
    }
};