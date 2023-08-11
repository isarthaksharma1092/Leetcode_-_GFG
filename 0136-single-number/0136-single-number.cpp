class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Best USING XOR
        
        // for XOR -> 3 ^ 3 = 0
        // TC: O(N)
        // SC: O(1)

        int  xor1 = 0;
        for(int i = 0;i<nums.size();i++)
        {
            xor1 = xor1^nums[i];
        }
        return xor1;
    }
};