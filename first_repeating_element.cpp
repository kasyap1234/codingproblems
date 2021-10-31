class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        map<int,int> omap; 
        for(int i=0;i<n;i++){
            omap[arr[i]]++; 
            
        }
        for(int i=0;i<n;i++){
            if(omap[arr[i]]>1){
                return i+1; 
                
            }
        }
        return -1; 
        
    }
};
