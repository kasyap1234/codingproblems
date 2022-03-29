int solve(int index,vector<int>&nums,vector<int>&dp){
if(index==0){
return nums[index]; 
}
    if(index<0){
        return 0; 
    }
   if(dp[index]!=-1){
       return dp[index]; 
       
       
   }
    int pick=nums[index]+ solve(index-2,nums,dp) ; 
    int notpick =solve(index-1,nums,dp); 
    return dp[index]=max(pick ,notpick); 
}


int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    vector<int>dp(nums.size(),-1); 
   return solve(nums.size()-1,nums,dp); 
    
}
