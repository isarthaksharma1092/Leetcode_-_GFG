class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> ans;
        map<int,int>hash;
        
        for(int i=0;i<nums.size();i++)
        {
            int a = nums[i];
            int b = target - nums[i];
            if(hash.find(b) != hash.end())
            {
                ans.push_back(hash[b]);
                ans.push_back(i);
            }
            hash[a] = i;
        }
        return ans;
    }
};