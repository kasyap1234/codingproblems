class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> ump;
        char ans; 
        for(auto it: s){
            if(ump.find(it)!=ump.end()){
                ans=it ; 
                break; 
            }
            ump[it]++; 
            
        }
        return ans; 
        
    }
};