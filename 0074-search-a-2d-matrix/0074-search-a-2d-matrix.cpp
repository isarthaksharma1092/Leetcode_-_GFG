class Solution {
private:
    //applying binary search for the particular range of elements
    
    //*** if you find binary search confusing try puting the range of element in another vector and 
    // then perform binary search in a traditional way ****
    
    bool bsearch(vector<vector<int>> matrix,int target,int findcol)
    {
        int start = 0,end = matrix[0].size()-1;
        while(start <= end){
            int mid =start+((end-start)/2);
            
            if(matrix[findcol][mid] == target){
                return true;
            }
            else if(matrix[findcol][mid] >target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return false;
    }
    
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int findcol = 0;
        int last = matrix[0].size()-1;
        bool flag = true;
        
        // here we are selecting the column in which target ranges between 
        // like 3 lies between 1 and 7
        // or 13 is between 10 and 20
        
        for(int i = 0;i<matrix.size();i++)
        {
            if(target >= matrix[i][0] && target<= matrix[i][last] )
            {
                findcol = i;
                break;
            }

        }
        

        if(bsearch(matrix,target,findcol))return true;
        
        return false;
    }
};