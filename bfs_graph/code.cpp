class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
         bool  vis[V]; 
         for(int i=0;i<V;i++){
             vis[i]=false; 
         }
         
         vis[0]=true ; 
         
        queue<int>q; 
        q.push(0); 
        vector<int>res; 
         
       while (!q.empty()){
           int s=q.front(); 
           res.push_back(s); 
           
           q.pop(); 
           for(auto i : adj[s]){
               if(!vis[i]){
               q.push(i); 
               vis[i]=true; 
               }
               
           }
       }
       return res; 
       
    }
};
