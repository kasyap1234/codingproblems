bool solve(string s) {
    unordered_map<char,int>mp; 
    for(int i=0;i<s.length();i++){
        mp[s[i]]++; 

    }
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        if(itr->second!=1){
            return false; 
        }
    }
    return true; 
    
}
