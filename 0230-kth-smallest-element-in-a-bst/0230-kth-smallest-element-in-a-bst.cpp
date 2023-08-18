class Solution 
{
private:
    // performing inOrder Treversal
    void inOrderT(TreeNode* root,int &ans,int k,int &count)
    {
        if(root == NULL || count>= k) return ;
        
        //If we do the Inorder traversal in a BST the answer will always be sorted 
        //the moment count == K just return the element
        inOrderT(root->left,ans,k,count);
        count++;
        if(count == k) {
            ans = root->val;
            return ;
        }
        inOrderT(root->right,ans,k,count);
        

    }    

public:
    int kthSmallest(TreeNode* root, int k) 
    {
        int ans = 0;
        int count = 0;
        inOrderT(root,ans,k,count);
        return ans;
    }
};