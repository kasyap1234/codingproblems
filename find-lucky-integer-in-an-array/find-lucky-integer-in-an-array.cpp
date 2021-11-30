class Solution {
public:
    int findmax(vector<int>&final){
int value =final[0]; 
    for(int i=0;i<final.size();i++){
        if(value <final[i]){
value =final[i]; 
        }
        
    }
    return value ; 
    }
    
    int findLucky(vector<int>& arr) {
        vector<int>final;
        final.push_back(-1);
        
        unordered_map<int,int>ans; 
        for(int i=0;i<arr.size();i++){
ans[arr[i]]++; 
        }
        for(auto itr=ans.begin();itr!=ans.end();itr++){
            if(itr->second==itr->first){
                final.push_back(itr->first); 
                
            }
        }
        return findmax(final); 
        
        
    }
};