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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL){return ans;}
        
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* curr;
        bool flag = true; 
        
        while(!q.empty())
        {
            int size = q.size();
            vector<int> res(size);
            for(int i = 0;i<size;i++)
            {
                curr = q.front();
                if(curr->left != NULL){q.push(curr->left);}
                if(curr->right != NULL){q.push(curr->right);}
                
                int index = (flag) ? i : (size - 1 - i);    
                res[index] = curr->val;
                
                q.pop();
            }
            flag =! flag;
            // if flag will be false than it will become true and vice versa
            ans.push_back(res);
        }
        return ans;
    }
};