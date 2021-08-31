class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans; 
        stack<TreeNode*>s;
        if(root==NULL){
            return ans; 
            
        }
        s.push(root); 
        while(!s.empty()){
        root=s.top(); 
           s.pop(); 
            
        ans.push_back(root->val); 
            if(root->right){
                s.push(root->right); 
                
                
            }
            if(root->left){
                s.push(root->left); 
                
            }
            
        }
        return ans; 
        
    }
};
