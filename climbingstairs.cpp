class Solution {
public:
    int climbStairs(int n) {
        if(n==1|| n==2 || n==3){
return n; 
        }
        vector<int>dp(n+1,-1); 
             int    left=climbStairs(n-1) ; 
       int  right=climbStairs(n-2); 
        
        
        if(dp[n]!=-1){
return dp[n]; 
        }

        else {
            dp[n]=left +right; 
            
           
            
        }
        return dp[n]; 
        
    }
};
