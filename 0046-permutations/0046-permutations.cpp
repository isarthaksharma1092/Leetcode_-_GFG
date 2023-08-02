class Solution {
private:
    void helper(vector<int>& nums,int start,vector<int>& res,vector<vector<int>>& ans)
    {
        if(nums.size() == res.size()){
            ans.push_back(res);
            return;
        }
        
        for(int i = start;i<nums.size();i++)
        {
            //using find function to avoid repeation of number 
            
            if (find(res.begin(), res.end(), nums[i]) == res.end()) 
            {
                res.push_back(nums[i]);
                helper(nums,0,res,ans);
                res.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int> res;
        helper(nums,0,res,ans);
        return ans;
    }
};