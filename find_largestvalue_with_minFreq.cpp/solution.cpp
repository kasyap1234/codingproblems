
int LargButMinFreq(int arr[], int n) {
    // code here
    int value ; 
    int freq; 
  unordered_map<int,int>ans; 
    for(int i=0;i<n;i++){
        ans[arr[i]]++; 
    }
    
    for(auto itr=ans.begin();itr!=ans.end();itr++){
        if(itr->first>value){
            value =itr->first; 
            freq=itr->second; 
        }
        
        
        
    }
    for(auto ptr=ans.begin();ptr!=ans.end();ptr++){
        if(ptr->first==value && freq>ptr->second){
            value=ptr->first; 
        }
    }
    return value ; 

}
