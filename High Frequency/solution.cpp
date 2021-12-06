int solve(vector<int>& nums) {
    unordered_map<int,int>mp; 
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++; 

    }
    int value =0; 
    
     for(auto itr=mp.begin();itr!=mp.end();itr++){
         if(itr->second>value){
             value=itr->second; 
         }
     }
     return value; 
}
