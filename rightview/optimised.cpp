class Solution {
public:

    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans; 
        return rightview(root,0,ans); 
    }
    vector<int> rightview(TreeNode*root, int level,vector<int>&ans){
        
        
        if(root==NULL){
            return ans; 
            
        }
       if(level==ans.size()){
           ans.push_back(root->val); 
       }
        rightview(root->right,level+1,ans); 
        rightview(root->left,level+1,ans); 
        return ans; 
        
        
    }
};
