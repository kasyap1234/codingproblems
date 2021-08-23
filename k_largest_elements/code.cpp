class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int>ans; 
        
        priority_queue<int>max_heap; 
        for(int i=0;i<n;i++){
            max_heap.push(arr[i]); 
            
        }
        while(k>0){
          ans.push_back(max_heap.top()); 
          max_heap.pop(); 
          
          k--; 
          
            
        }
        return ans; 
    }     
};
