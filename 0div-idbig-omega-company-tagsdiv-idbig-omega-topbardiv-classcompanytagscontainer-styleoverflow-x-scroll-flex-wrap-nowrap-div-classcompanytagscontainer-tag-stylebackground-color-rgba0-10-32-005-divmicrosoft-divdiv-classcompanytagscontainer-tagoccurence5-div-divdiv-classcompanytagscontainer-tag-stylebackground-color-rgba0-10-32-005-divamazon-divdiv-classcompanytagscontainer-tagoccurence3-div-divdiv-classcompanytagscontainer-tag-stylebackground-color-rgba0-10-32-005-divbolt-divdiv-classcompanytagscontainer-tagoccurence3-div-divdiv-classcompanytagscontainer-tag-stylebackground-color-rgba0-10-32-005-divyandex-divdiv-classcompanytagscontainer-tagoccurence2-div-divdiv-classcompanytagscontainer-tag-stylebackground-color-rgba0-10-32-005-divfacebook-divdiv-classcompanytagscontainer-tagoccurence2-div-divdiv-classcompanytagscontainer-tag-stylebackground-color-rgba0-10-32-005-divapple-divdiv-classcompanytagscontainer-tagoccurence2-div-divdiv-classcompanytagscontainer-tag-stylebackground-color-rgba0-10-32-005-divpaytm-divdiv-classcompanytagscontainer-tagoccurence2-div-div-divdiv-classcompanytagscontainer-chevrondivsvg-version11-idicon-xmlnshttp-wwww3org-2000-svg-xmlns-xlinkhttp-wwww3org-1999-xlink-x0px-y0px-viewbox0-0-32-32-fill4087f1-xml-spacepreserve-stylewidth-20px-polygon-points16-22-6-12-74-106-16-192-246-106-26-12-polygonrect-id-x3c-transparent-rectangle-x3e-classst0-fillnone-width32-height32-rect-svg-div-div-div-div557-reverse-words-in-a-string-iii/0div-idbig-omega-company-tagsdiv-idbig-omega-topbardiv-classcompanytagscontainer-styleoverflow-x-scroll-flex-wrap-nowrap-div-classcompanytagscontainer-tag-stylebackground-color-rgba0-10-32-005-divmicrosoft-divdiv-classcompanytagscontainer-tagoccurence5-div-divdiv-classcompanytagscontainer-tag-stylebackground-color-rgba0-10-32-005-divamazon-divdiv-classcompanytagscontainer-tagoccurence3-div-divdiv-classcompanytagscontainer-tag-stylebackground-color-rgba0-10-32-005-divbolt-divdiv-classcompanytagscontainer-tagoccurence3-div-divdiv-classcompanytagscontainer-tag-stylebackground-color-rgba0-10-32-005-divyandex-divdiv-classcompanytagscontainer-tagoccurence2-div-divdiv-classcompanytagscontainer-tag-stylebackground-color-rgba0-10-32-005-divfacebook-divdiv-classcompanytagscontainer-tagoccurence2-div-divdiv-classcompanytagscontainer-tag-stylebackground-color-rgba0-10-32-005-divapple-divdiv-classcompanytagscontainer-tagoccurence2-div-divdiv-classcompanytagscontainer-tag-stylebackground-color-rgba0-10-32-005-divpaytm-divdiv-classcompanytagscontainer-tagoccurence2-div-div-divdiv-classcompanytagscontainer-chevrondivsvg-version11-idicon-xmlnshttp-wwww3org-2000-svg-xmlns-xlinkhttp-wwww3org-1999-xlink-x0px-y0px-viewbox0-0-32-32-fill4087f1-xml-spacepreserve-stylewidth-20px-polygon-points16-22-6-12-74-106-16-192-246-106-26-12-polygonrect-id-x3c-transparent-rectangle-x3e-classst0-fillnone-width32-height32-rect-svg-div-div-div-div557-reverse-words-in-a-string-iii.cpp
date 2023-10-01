class Solution {
public:
    string reverseWords(string s)
    {
        int start = 0,end = 0;
        for(int i = 0;i<s.length();i++)
        {
            if(s[i] != ' ' || s[i+1] == '\0')
            {
                end++;
            }
            else{
                reverse(s.begin()+start,s.begin()+end);
                start = end+1;
                end = start;
            }
        }
        reverse(s.begin() + start, s.begin() + end);
        return s;
    }
};
