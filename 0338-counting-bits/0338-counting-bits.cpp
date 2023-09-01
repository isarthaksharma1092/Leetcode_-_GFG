class Solution {
public:
    //recurssive fuction 
    int bitFinder(int num)
    {
        // base condition
        if(num == 0){ return 0;}
        if(num == 1){ return 1;}
        
        // Induction 
        if(num % 2 == 0)
        {
            return bitFinder(num/2);
        }
        else
        {
            return bitFinder(num/2) + 1;    
        }
    }
    
    vector<int> countBits(int n) 
    {
        vector <int> v;
        for(int i = 0; i <= n;i++)
        {
            v.push_back(bitFinder(i));
        }
        return v;
    }
};