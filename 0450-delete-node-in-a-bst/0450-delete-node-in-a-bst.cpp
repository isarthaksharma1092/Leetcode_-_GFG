class Solution {
private:
    TreeNode* helper(TreeNode* curr)
    {
        //main deletion operation is executed here
        
        //if left node does not exit join the right node with 'root->left'
        if(curr->left == NULL){
            return curr->right;
        }
        //if right node does not exit join the left node with 'root->right'
        if(curr->right == NULL){
            return curr->left;
        }
        
        //if both nodes exists now we can either merge the left node to left of the curr node and vice versa.
        
        //here i am merging right side of curr Node to the left node 
        TreeNode* rightChild = curr -> right;
        TreeNode* lastRightNode = findLastNode(curr ->left);
        lastRightNode->right = rightChild;
        
        return curr->left;
    }
    TreeNode* findLastNode(TreeNode* root)
    {
         if(root->right == NULL)
         {
             return root;
         }
        return findLastNode(root->right);
    }
    
    
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root== NULL) return NULL;
        if(root->val == key){
            return helper(root);
        }
        TreeNode* temp = root;
        while(root)
        {
            //Traversing and on finding sending the parent node of key to helper function
            
            if(root->val > key)
            {
                if(root->left != NULL && root->left->val == key)
                {
                    root->left = helper(root->left);
                }else
                {
                    root = root->left;
                }
            }else
            {
                if(root->right != NULL && root->right->val == key)
                {
                    root->right = helper(root->right);
                }
                else
                {
                    root = root->right;
                }
            }
        }
        return temp;
    }
};