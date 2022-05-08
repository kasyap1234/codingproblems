int majorityElement(int a[], int size)
    {
        unordered_map<int,int>umap; 
        for(int i=0;i<size;i++){
            umap[a[i]]++; 
          
        }
        for(auto itr=umap.begin();itr!=umap.end();itr++){
            if(itr->second>(size/2)){
                return itr->first; 
                
            }
            
        }
        return -1; 
        
        // your code here
        
    }
