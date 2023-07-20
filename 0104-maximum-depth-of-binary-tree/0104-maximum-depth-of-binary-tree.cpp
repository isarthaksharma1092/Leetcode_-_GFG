#include<bits/stdc++.h>
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
    int maxDepth(TreeNode* root) 
    {
        if(!root) return 0;
        queue<TreeNode*> q;
        int height = 0,countNode = 0;
        TreeNode* curr;
        q.push(root);
        while(!q.empty())
        {
            height++;
            countNode = q.size();
            while(countNode--)
            {
                curr = q.front();
                if(curr->left != NULL){q.push(curr->left);}
                if(curr->right != NULL){q.push(curr->right);}
                q.pop();
            }
        }
        return height;
    }
};