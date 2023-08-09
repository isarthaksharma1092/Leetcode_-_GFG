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
    int fingingMaxTime(TreeNode* root, map<TreeNode*,TreeNode*> &parent,TreeNode* res)
    {
        queue<TreeNode*> q;
        q.push(res);
        
        map<TreeNode*,int> visited;
        visited[res] = 1;
        int time = 0;
        
        while(!q.empty())
        {
            int flag = 0;
            int size = q.size();
            for(int i = 0;i<size;i++){
                auto curr = q.front();
                q.pop();
                //left
                if(curr->left && !visited[curr->left] ){
                    flag = 1;
                    visited[curr->left] = 1;
                    q.push(curr->left);
                }
                //right
                if(curr->right && !visited[curr->right] ){
                    flag = 1;
                    visited[curr->right] = 1;
                    q.push(curr->right);
                }
                //top
                if(parent[curr] && !visited[parent[curr]]){
                    flag = 1;
                    visited[parent[curr]] = 1;
                    q.push(parent[curr]);
                }
            }
            if(flag) time++;
            
        }
        return time;
    }
    
    TreeNode* findingNode(TreeNode* root, int start, map<TreeNode*,TreeNode*> &parent)
    {
        TreeNode* res;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            TreeNode* curr = q.front();
            
            // finding the element 
            if(curr->val == start){
                res= curr;
            }
            q.pop();
            
            //accessing and pushing the right and left element into the queue 
            //as well as setting parent_map by which we can know the parent node
            if(curr->left != NULL)
            {
                parent[curr->left] = curr;
                q.push(curr->left);
            }
            
            if(curr->right != NULL)
            {
                parent[curr->right] = curr;
                q.push(curr->right);
            }
        }
        return res;
    }
public:
    int amountOfTime(TreeNode* root, int start) 
    {
        map<TreeNode*,TreeNode*> parent; 
        TreeNode* res = findingNode(root,start,parent);  
        return fingingMaxTime(root,parent,res);
        // return 5;
    }
};