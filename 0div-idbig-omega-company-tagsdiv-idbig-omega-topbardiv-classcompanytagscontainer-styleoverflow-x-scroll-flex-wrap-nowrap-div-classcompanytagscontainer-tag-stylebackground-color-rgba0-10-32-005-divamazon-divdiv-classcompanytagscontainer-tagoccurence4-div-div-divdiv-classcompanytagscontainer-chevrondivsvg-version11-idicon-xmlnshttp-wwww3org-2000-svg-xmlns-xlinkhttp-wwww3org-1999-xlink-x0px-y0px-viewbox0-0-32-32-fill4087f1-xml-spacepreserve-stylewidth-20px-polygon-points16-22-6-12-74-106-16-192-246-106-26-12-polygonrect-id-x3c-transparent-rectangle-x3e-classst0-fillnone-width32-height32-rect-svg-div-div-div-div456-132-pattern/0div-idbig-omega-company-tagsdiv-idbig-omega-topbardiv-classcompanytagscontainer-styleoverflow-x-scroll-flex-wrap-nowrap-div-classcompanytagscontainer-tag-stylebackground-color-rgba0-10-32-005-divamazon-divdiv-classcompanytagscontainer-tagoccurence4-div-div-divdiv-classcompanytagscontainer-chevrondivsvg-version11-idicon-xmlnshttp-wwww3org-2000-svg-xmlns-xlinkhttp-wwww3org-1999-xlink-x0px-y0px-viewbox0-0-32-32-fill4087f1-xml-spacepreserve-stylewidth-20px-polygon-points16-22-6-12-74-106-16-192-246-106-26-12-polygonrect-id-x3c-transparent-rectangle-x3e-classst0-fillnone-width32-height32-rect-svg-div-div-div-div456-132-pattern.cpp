class Solution {
public:
    bool find132pattern(vector<int>& nums)
    {
        int n = nums.size();
        stack<int> s;
        int k = INT_MIN;
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] < k) return true;
            while (!s.empty() && s.top() < nums[i]) {
                k = max(k, s.top());
                s.pop();
            }
            s.push(nums[i]);
        }
        return false;
    }
};