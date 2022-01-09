class Solution {
public:
    vector<int>inorder(TreeNode*root,vector<int>&ans){
        if(root){
            inorder(root->left,ans); 
            ans.push_back(root->val); 
            inorder(root->right,ans); 
        
        }
        return ans; 
    }
    int minDiffInBST(TreeNode* root) {
       vector<int>ans; 
        inorder(root,ans); 
        
        
       int minm=INT_MAX; 
        int diff; 
        for(int i=0;i<ans.size()-1;i++){
            diff=ans[i+1]- ans[i]; 
            if(diff<minm){
                minm=diff; 
            }
        }
        return minm; 
        
    }
};