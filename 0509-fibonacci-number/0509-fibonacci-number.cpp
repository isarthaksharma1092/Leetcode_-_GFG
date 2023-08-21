class Solution {
public:
    int fib(int n) 
    {
        int first = 0,second = 1,sum;
        
        if(first == n) return 0;
        if(second == n) return 1;
        
        for(int i = 2;i<= n;i++)
        {
            sum = first + second;
            first = second;
            second = sum;
        }
        return sum;
    }
    
    // Recursive
    // int fib(int n) 
    // {
    //      if(n <= 1) return n;
    //      return fib(n-1)+ fib(n-2);
    // }    

};