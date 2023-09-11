class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        //moore's voting algorithm
        int count = 0,element;
        
        for(int i = 0;i<nums.size();i++)
        {
            if(count == 0)
            {
                element = nums[i];
                count++;
            }
            else if(nums[i] != element) count--;
            else if(nums[i] == element) count++;
        }

        return element;
        
    }
};