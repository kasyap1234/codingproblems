int solve(vector<int>& nums) {
    unordered_map<int,int>mp; 
    if(nums.size()==0 || nums.size()==1){
        return 0; 
    }
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++; 
    }
    int count=0; 
    int pairs=0; 
    for(auto itr=mp.begin();itr!=mp.end();itr++){
       if(itr->second>1){
           count+=itr->second; 
           

       }
       pairs+=((count)*(count-1))/2; 
       count=0; 
       

       
    }
    return pairs;  

}
