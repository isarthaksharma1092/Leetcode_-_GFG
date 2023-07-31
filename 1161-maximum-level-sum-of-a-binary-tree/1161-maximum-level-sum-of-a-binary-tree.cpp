class Solution {
public:
    int maxLevelSum(TreeNode* root) 
    {
        int max = INT_MIN;
        int ans = 0, level = 0;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) 
        {
            level++;
            int sum = 0;
            for (int sz = q.size(); sz > 0; --sz) 
            {
                TreeNode* curr = q.front();
                sum += curr->val;
                q.pop();

                if (curr->left != NULL) q.push(curr->left);
                if (curr->right != NULL) q.push(curr->right);
            }

            if (max < sum) 
            {
                max = sum;
                ans = level;
            }
        }
        return ans;
    }
};