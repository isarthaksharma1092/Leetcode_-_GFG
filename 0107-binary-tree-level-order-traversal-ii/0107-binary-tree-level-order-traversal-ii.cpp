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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL) return ans;
        
        queue<TreeNode*>q;
        q.push(root);
        
        TreeNode* curr;
        
        while(!q.empty())
        {
            vector<int> res;

            int size = q.size();
            for(int i = 0;i<size;i++)
            {
                curr = q.front();
                if(curr->left != NULL){q.push(curr->left);}
                if(curr->right != NULL){q.push(curr->right);}

                res.push_back(curr->val);
                q.pop();
            }
            ans.push_back(res);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};