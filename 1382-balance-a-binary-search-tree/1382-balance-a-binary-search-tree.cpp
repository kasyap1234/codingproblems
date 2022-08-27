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
      vector<int> inorder(TreeNode*root,vector<int> & inr){
if(root){
    inorder(root->left,inr); 
    inr.push_back(root->val); 
    inorder(root->right,inr); 
    
}
        return inr; 
        
    }
    
    
    TreeNode*inorderToBalancedBST(vector<int>& inr,int start ,int end){
        if(start>end){
            return NULL; 
            
        }
        int mid=(start +end)/2; 
        TreeNode*root=new TreeNode(inr[mid]); 
        root->left=inorderToBalancedBST(inr,start,mid-1); 
        root->right=inorderToBalancedBST(inr,mid+1,end); 
    return root;     
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> inr; 
        inorder(root,inr); 
    return inorderToBalancedBST(inr,0,inr.size()-1); 
        
        
    }
};