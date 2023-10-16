class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        // TC O(log n)
        
        // maintaing a  ans which by default is given the highest value 
        // basically UPPER BOUND
        
        int N = nums.size(); 
        int low = 0,high = N-1,ans = N;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target)
            {
                ans = mid;
                high = mid -1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};