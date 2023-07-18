// Another way could be Reversing the vector 
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL){return ans;}
        
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* curr;
        bool flag = false; 
        
        while(!q.empty())
        {
            int size = q.size();
            vector<int> res;
            for(int i = 0;i<size;i++)
            {
                curr = q.front();
                if(curr->left != NULL){q.push(curr->left);}
                if(curr->right != NULL){q.push(curr->right);}
                res.push_back(curr->val);
                
                q.pop();
            }
            if(flag == true){
                    reverse(res.begin(),res.end());
                    flag = false;
                }
                else{flag = true;}
            ans.push_back(res);
        }
        return ans;
    }
};
