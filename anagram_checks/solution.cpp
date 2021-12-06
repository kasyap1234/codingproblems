bool solve(string s0, string s1) {
    if(s0.length()!=s1.length()){
        return false; 
    }
   unordered_map<char,int>mp1; 
   unordered_map<char,int>mp2; 
   for(int i=0;i<s0.length();i++){
       mp1[s0[i]]++; 
          }
    for(int i=0;i<s1.length();i++){
        mp2[s1[i]]++; 

    }
    if(mp1==mp2){
        return true; 
    }
    else{
        return false; 
        
    }
   
}
