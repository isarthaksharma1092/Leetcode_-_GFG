class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> answer;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int left = 0, right = col-1 , top = 0, bottom = row-1;
        
        while(left <= right && top <= bottom)
        {
            //right
            // 1->2->3     ;      after a iteration 5->
            for(int  i = left;i<=right;i++)
            {
                answer.push_back(matrix[top][i]);
            }
            top++;
            
            //bottom
            // 6->9
            for(int i = top;i<=bottom ;i++)
            {
                answer.push_back(matrix[i][right]);
            }
            right--;
            
            //left
            // 8->7 (reverse for loop)
            if(top<= bottom)
            {
                for(int i = right;i >= left;i--)
                {
                    answer.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            //top
            //4-> (reverse for loop)
            if(left <= right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    answer.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return answer;
    }
};