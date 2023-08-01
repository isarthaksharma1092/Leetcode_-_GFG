class Solution {
private: 
    void helper(int start,int n,int limits,vector<int> &res,vector<vector<int>> &ans)
    {
        if(res.size() == limits)
        {
            ans.push_back(res);
            return ;
        }
        
        for(int i = start;i< n+1;i++){
            res.push_back(i);   
            helper(i+1,n,limits,res,ans);
            res.pop_back();
        }
    }
    
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> res;
        helper(1,n,k,res,ans);
        return ans;
    }
};