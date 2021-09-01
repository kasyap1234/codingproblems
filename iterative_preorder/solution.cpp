class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        vector<int>ans; 
        stack<Node*>s; 
        if(root==NULL){
            return ans; 
            
        }
        s.push(root); 
        while (!s.empty()){
            root=s.top(); 
            ans.push_back(root->data); 
            
            s.pop(); 
            if(root->right){
                s.push(root->right); 
                
            }
            if(root->left){
                s.push(root->left); 
                
            }
            
        }
        return ans; 
        //code here
    }
};
