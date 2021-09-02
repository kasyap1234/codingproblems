class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    
    vector<int> rightView(Node *root){
       vector<int>ans; 
      
     
        if(root==NULL){
            return ans; 
        }
        queue<Node*>q; 
        q.push(root); 
        
        while(!q.empty()){
            int n=q.size(); 
            for(int i=0;i<n;i++){
                Node*cur=q.front(); 
                q.pop(); 
                 if(i==n-1){
                 ans.push_back(cur->data); 
             }
             if(cur->left!=NULL){
                 q.push(cur->left); 
             }   
             if(cur->right!=NULL){
                 q.push(cur->right); 
             }
            
            }
        }
        
       // Your Code here
       return ans ;
       
    }
};
