class Solution {
public:
    vector<int> runningSum(vector<int>& nums)
    {
        
        vector<int> res; // creating new vector 
        res.push_back(nums[0]);

        //condition to exit if only one 1 element in array
        if(nums.size() < 1)
        {
            return nums;
        }

        for(int i = 1;i < nums.size();i++)
        {
            res.push_back(nums[i]+res[i-1]);   
        }
        return res;
    }
};