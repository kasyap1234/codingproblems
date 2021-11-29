class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int flag=0; 
    unordered_map<char,int>ans; 
        for(int i=0;i<s.length();i++){
            ans[s[i]]++; 
}
        int x=ans[s[0]]; 
        for(auto itr=ans.begin();itr!=ans.end();itr++){
        
        if(itr->second!=x){
return false; 
        }
            
           
        
    }
        return true; 
        
    }
    
};