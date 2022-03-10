class Solution {
public:
    
int solve(int n,vector<int>&nums,vector<int>&dp)
    {
    if(n==0)// if we reach on house no 0 then only we can take that money
    return nums[0];
        if(n<0)//for neagtive index we return 0 because we never include it              
    return 0;
       
        if(dp[n]!=-1)// if already ans exist then no need for futher call
            return dp[n];
int fc=nums[n]+solve(n-2,nums,dp);//ifwe rob itthen call will go non adjecnt        
    int sc=0+solve(n-1,nums,dp);//if we not rob then we call call adjecent
            return dp[n]=max(fc,sc);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);// make dp array
        return solve(n-1,nums,dp);// call recusive function solve to fill dp
    }
};