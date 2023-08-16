class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
        vector<int> ans;
        list<int> l;
        
        int i = 0,j=0,vsize=nums.size();
        while(j<vsize)
        {
            //calculation
            while(l.size()>0 && l.back()<nums[j])
            {
                l.pop_back();
            }
            l.push_back(nums[j]);
            
            
            if(j-i+1 < k)
            {
                j++;
            }
            
            else if(j-i+1 == k)
            {
                // printing answer from calculations
                ans.push_back(l.front());
                
                //sliding the window
                if(l.front() == nums[i] )
                {
                    l.pop_front();
                }
                i++;j++;
            }
        }
        return ans;
    }
};