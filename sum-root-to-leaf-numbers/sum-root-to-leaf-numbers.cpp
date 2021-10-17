/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=0; 
    
    int sumNumbers(TreeNode* root) {
        if(root==NULL){
            return 0; 
        }
        
         dfs(root,ans); 
        return ans; 
        
        
        
    }
    void dfs(TreeNode*root, int sum){
    
        
        if(root==NULL){
            return ; 
        
            
        }
        else{
            sum*=10; 
            sum+=root->val; 
            
        }
        if(root->left==NULL and root->right==NULL){
           
            ans+=sum; 
            return ; 
            
        }
        dfs(root->left,sum); 
        dfs(root->right,sum); 
        
    }
};