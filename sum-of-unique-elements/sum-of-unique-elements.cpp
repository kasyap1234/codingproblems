class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0; 
        unordered_map<int,int>ans; 
        for(int i=0;i<nums.size();i++){
           ans[nums[i]]++; 
        }
        for(auto itr=ans.begin();itr!=ans.end();itr++){
if(itr->second==1){
sum+=itr->first; 
}
        }
       return sum; 
        
    }
    
};