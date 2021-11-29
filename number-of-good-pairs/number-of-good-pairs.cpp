class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count =0;
unordered_map<int,int>ans;
for(int i=0;i<nums.size();i++){
ans[nums[i]]++;

    }
    for(auto itr=ans.begin();itr!=ans.end();itr++){
        if(itr->second>1){
            int raise=itr->second; 
            count=count +raise*(raise-1)/2 ; 
            
            
        }
    }
    return count ; 
    
}
    
};