class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int size = mat.size();

        
        for(int i =0;i<mat.size();i++)
        {
            sum += mat[i][i];
        }
        
        for(int i=0,j=size-1;i<size || j>0;i++,j--)
        {
                   sum += mat[i][j];
                        
        }

        if(mat.size() %2 == 1)
            sum = sum - mat[floor(mat.size()/2)][floor(mat.size()/2)];
        return sum;
    }   
};