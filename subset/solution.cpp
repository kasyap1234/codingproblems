class Solution {
public:
void solve(vector<vector<int>>&ans,vector<int>&nums,int index,vector<int>&temp){
    if(index>nums.size()){
        ans.push_back(temp); 
            return ; 
    }
    // exclude element 
    solve(ans,nums,index+1,temp); 
    // include element ; 
    int element=nums[index]; 
    temp.push_back(element); 
    solve(ans,nums,index+1,temp); 

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans; 
        vector<int>temp; 
   solve(ans,nums,0,temp);
        return ans; 
        
    }
};
