//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int freq[26] = {0};
        int maxi = -1;
        char result = 0;
        
        for(int i = 0;i<str.length();i++)
        {
            freq[str[i] - 97 ]++;
        }
        for(int i = 0;i<26;i++)
        {
            if (maxi < freq[i]) 
            {
                maxi = freq[i];
                result = (char)(i + 'a');
            }
        }
        return result;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends