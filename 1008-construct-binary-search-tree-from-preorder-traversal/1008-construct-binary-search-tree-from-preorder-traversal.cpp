class Solution {
private:
    TreeNode* helper(vector<int>& preorder,int upperBound,int &index)
    {   
        if(index == preorder.size() || preorder[index] > upperBound)
        {
            return nullptr;
        }

        TreeNode* root = new TreeNode(preorder[index++]);
        root->left = helper(preorder,root->val,index);
        root->right = helper(preorder,upperBound,index);
        return root; 
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        int index = 0;
        return helper(preorder,INT_MAX,index);
    }
};