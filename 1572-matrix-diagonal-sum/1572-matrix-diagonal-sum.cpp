class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0; 
        for(int row=0;row<mat.size();row++){
            for(int col=0;col<mat[0].size();col++){
                if(row==col){
                    sum+=mat[row][col]; 
                    
                }
                if(row+col==mat.size()-1 && row!=col){
                    sum+=mat[row][col]; 
                }
            }
           
       
            
        }
        return sum; 
    }
};