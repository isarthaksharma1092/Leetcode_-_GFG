class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int> hash;
        for(int i = 0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        
        int maxi = 1;
        int pos;
        for(auto it:hash)
        {
            if(it.second > maxi ){
                maxi = it.second;
                pos = it.first;
            }
        }
        return pos;
    }
};