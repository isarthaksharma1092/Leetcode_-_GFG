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
    int findBottomLeftValue(TreeNode* root) 
    {
        queue<TreeNode*> q;
        TreeNode* curr;
        q.push(root);

        int lastValue = 0;   
        while(!q.empty())
        {
            int size = q.size();
            for(int i = 0;i<size;i++)
            {

                curr = q.front();
                /* 
                Simply storing the very first part of evey queue insertion
                
                if we try to use a vector to store data we can understand it easy
                (using vector for understanding purpose only no needed in this question)
                
                Example 2 
                [[1], [2,3] , [4,5,6] , [7] ]
                just print 0th element 
                */
                if(i==0)lastValue = curr->val;
                
                if(curr -> left ) q.push(curr->left);
                if(curr -> right ) q.push(curr->right);
                q.pop();
            }
        }
        return lastValue;
    }
};