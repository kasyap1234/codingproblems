bool solve(string typed, string target) {
    
map<char,int>m1; 
map<char,int>m2; 
vector<char>v1; 
vector<char>v2; 
for(int i=0;i<typed.length();i++){
    m1[typed[i]]++; 
    }
    for(int i=0;i<target.length();i++){
        m2[target[i]]++; 
    }
    for(auto itr=m1.begin();itr!=m1.end();itr++){
         v1.push_back(itr->first); 
    }
    for(auto btr=m2.begin();btr!=m2.end();btr++){
        v2.push_back(btr->first); 
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<endl; 
    }
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<endl; 
    }
    
    if(v1.size()!=v2.size()){
        return false; 
    }
    for(int i=0;i<v1.size();i++){
        if(v1[i]!=v2[i]){
            return false; 
        }
    }
   return true; 

    

    
}
