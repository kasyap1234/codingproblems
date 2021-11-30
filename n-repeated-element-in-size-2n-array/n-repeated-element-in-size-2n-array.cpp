class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>ans; 
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++; 
        }
        int value ; 
        for(auto itr=ans.begin();itr!=ans.end();itr++){
            if(itr->second>1){
                value=itr->first; 
            }
        }
        return value; 
        
    }
};