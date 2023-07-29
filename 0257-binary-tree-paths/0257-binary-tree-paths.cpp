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
    void helper(vector<string>&res, TreeNode* root,string str)
    {
        if(root == NULL){return;}
        
        //when we reach the leaf node
        if(root->left == NULL && root->right == NULL)
        {
            str += to_string(root->val);
            res.push_back(str);
            return;
        }
        
        // storing each root->data into str and,
        // later when we reach leaf node pushing it into res vector
        str += to_string(root->val)+"->";      
        
        //recusive flow
        helper(res,root->left,str);
        helper(res,root->right,str);
    }
    
public:
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        vector<string> answer;
        helper(answer,root,"");
        return answer;
    }
};