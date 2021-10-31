class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>umap; 
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++; 
        }
        for(auto  i=umap.begin();i!=umap.end();i++){
            if(i->second>1){
                return i->first; 
                
            }
        }
        return 1; 
        
    }
};