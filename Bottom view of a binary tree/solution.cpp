class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans; 
        queue<pair<Node*,int>>q; 
        map<int,int > mpp; 
        if(root==NULL){
            return ans; 
            
        }
        q.push({root,0}); 
        while(!q.empty()){
            auto itr=q.front(); 
            q.pop(); 
            Node*node=itr.first; 
            int line=itr.second; 
            mpp[line]=node->data; 
            if(node->left){
                q.push({node->left,line-1}); 
                }
                if(node->right){
                    q.push({node->right,line+1}); 
                }
            
        }
        for(auto itr: mpp){
            ans.push_back(itr.second);
            }
        
    }
};
