class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        if(arr.size() == 1)
        {
            arr[0] = -1;
            return arr;
        }
        
        int max = -1;
        for(int i = arr.size()-1 ; i>=0; i--)
        {
            int temp = max;
            if(arr[i] > max)
            {
                max = arr[i];
            }
            arr[i] = temp;
        }
        return arr;
    }
};