void helper(vector<int>& pushed, vector<int>& popped,stack<int> &s,int count)
{
    int j=0,i=0;
    while(j<pushed.size())
    {

        if(!(s.empty()) && popped[j] == s.top())
        {
            s.pop();
            j++;
        }
        else{
            if(i<pushed.size())
            {
                s.push(pushed[i]);
                i++;
            }
            else{return;}
            
        }
    }
    return;
}
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
    {
        stack<int> s;
        helper(pushed,popped,s,0);
        if(s.empty()){return true;}
        else return false;
    }
};