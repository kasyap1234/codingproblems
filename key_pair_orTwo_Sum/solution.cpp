class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    unordered_map<int,int>umap; 
	    for(int i=0;i<n;i++){
	        umap[arr[i]]++; 
	        
	    }
	    for(auto it=umap.begin();it!=umap.end();it++){
	        int key=it->first; 
	        int count=it->second; 
	        int pair=x-key; 
	        if(pair==key){
	            if(count>1){
	                return true;
	            }
	            
	            
	        }
	        else{
	            
	        
	        if(umap.find(x-key)!=umap.end()){
	            return true; 
	            
	        }
	        }
	    }
	    return false; 
	    
	}
};
