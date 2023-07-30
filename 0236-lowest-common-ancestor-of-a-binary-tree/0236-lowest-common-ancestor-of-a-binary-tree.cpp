/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    TreeNode* helper(TreeNode* root, TreeNode* p, TreeNode* q)
    {   
        if(root == NULL || root == p || root == q){ return root; }
        
        TreeNode* lh = helper(root->left,p,q);
        TreeNode* rh = helper(root->right,p,q);
        
        if(lh == NULL)return rh;
        else if(rh == NULL)return lh;
        else{return root;}
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        return helper(root,p,q);    
    }
};