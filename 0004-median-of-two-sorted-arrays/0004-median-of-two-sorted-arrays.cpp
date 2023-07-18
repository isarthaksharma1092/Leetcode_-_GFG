class Solution {
public:
double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) 
    {
        vector<int> v;
        
        for (auto i = num1.begin(); i != num1.end(); ++i)
        {
            v.push_back(*i);
        }
        for (auto j = num2.begin(); j != num2.end(); ++j)
        {
            v.push_back(*j);
        }
        
        sort(v.begin(),v.end());
        
        int mid=num1.size()+num2.size();
        
        if(mid%2!=0)
        {
            int temp = mid/2;
            int &element = v[temp];
            return element;
        }
        else
        {
            double temp =  mid/2;
            
            int &element1 = v[temp-1];
            int &element2 = v[temp];
            
            double val =element1*1.0;

            double median = double((val+element2)/2);
            
            return median;                
        }
    }

};