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
    void helper(TreeNode* root,vector<int> &record)
    {
        if(root == NULL){
            record.push_back(0);
            return ;
        }
        record.push_back(root->val);
        helper(root->left,record);
        helper(root->right,record);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> record1;
        helper(p,record1);

        vector<int> record2;
        helper(q,record2);

        if(record1 == record2){
            return true;
        }       
        return false;
    }
};