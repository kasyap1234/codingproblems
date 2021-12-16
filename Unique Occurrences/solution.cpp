bool solve(vector<int>& nums) {
    unordered_map<int,int>mp; 
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++; 
    }
    if(nums.size()==0){
        return true; 
    }
   set<int>s; 
   vector<int>ans; 
   for(auto itr=mp.begin();itr!=mp.end();itr++){
       s.insert(itr->second); 
   }
   for(auto itr=mp.begin();itr!=mp.end();itr++){
     ans.push_back(itr->second); 
   }
   if(ans.size()==s.size()){
       return true; 
   }
   else{
       return false; 
       
   }
   
}
