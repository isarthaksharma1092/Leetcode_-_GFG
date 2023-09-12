class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        //kadanes algorithms
        
        int maximum = INT_MIN, sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            maximum = max(sum , maximum);
            
            if(sum < 0) sum = 0;
        }
        return maximum;
    }
};