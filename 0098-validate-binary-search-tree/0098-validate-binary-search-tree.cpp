class Solution {
private: 
    bool helper(TreeNode* root,long long mini,long long maxi)
    {
        if(root == NULL) return true;

        if(root->val >= maxi || root->val <= mini) return false;
        
        return helper(root->left,mini,root->val) &&  helper(root->right,root->val,maxi);

    }
    
public:
    bool isValidBST(TreeNode* root) 
    {
        return helper(root,LLONG_MIN,LLONG_MAX);

    }
};