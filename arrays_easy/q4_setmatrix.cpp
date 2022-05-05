// brute force approach - create extra matrix and make changes in it and in the end return the new matrix 
// wrong approach - if we think that we can change the values of elements as parse the matrix . it will give wrong solution.

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int>r(row,-1);
        vector<int>c(col,-1);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    r[i]=0;
                    c[j]=0;
                }
            }
        }
        for(int i=0;i<r.size();i++){
            if(r[i]==0){
                for(int j=0;j<matrix[i].size();j++){
                    matrix[i][j]=0;
                }
            }
        }
        for(int i=0;i<c.size();i++){
            if(c[i]==0){
                for(int j=0;j<matrix.size();j++){
                    matrix[j][i]=0;
                }
            }
        }
    }
};