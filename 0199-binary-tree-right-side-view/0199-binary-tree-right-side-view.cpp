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
    vector<int> rightSideView(TreeNode* root)
    {
        vector<int>ans;
        if(root == NULL) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        TreeNode* curr;
        while(!q.empty())
        {
            int size = q.size();
            vector<int> temp;
            for(int i = 0;i<size;i++)
            {
                curr = q.front();
                if(curr->right != NULL) q.push(curr->right);
                if(curr->left != NULL) q.push(curr->left);
                temp.push_back(curr->val);
                q.pop();
            }
            ans.push_back(temp[0]);
        }
        return ans;
    }
};