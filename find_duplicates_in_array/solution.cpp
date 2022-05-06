 vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> v; 
        v.push_back(-1); 
        
        unordered_map<int,int> umap; 
        for(int i=0;i<n;i++){
            umap[arr[i]]++; 
        }
        for(auto itr=umap.begin();itr!=umap.end();itr++){
            if(itr->second>1){
                v.push_back(itr->first); 
            }
        }
      if(v.size()==1){
        return v; }
        else{
            v.erase(v.begin()); 
            sort(v.begin(),v.end()); 
            return v; 
            
            
        }
