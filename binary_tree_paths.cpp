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
        void Helper(TreeNode*root,vector<string>&ans,string cur){
if(!root){
    return ; 
}
  if(root->left|| root->right){
      cur+=to_string(root->val)  ;
      cur+="->"; 
      
  }  
        else{
        cur+=to_string(root->val); 
            ans.push_back(cur); 
        }
        Helper(root->left,ans,cur); 
        Helper(root->right,ans,cur); 
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans; 
        string cur=""; 
        Helper(root,ans,cur); 
        return ans; 
        
    }

};
