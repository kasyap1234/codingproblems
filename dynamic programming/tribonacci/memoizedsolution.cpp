class Solution {
public:
    int tribonacci(int n) {
        int dp[n+1]; 
        for(int i=0;i<n+1;i++){
            dp[i]=-1; 
        }
        
        if(n==0){
            return 0; 
        }
        
        if(n==1){
            return 1; 
        }
       
        if(n==2){
            return 1; 
            
        }
       
        if(dp[n]!=-1){
            return dp[n]; 
            
        }
       dp[n]=tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3); 
        
        return dp[n]; 
        
        
    }
    
};
