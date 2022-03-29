int solve(int index,vector<int>&nums){
if(index==0){
return nums[index]; 
}
    if(index<0){
        return 0; 
    }
    int pick=nums[index]+ solve(index-2,nums) ; 
    int notpick =solve(index-1,nums); 
    return max(pick ,notpick); 
}


int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
   return solve(nums.size(),nums); 
    
}
