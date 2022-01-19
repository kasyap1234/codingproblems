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
    vector<vector<int>>ans; 
    vector<int>path; 

    void dfs(TreeNode*root,int sum , int target){
        
        if(root==NULL){
            return ; 
        }
        sum+=root->val; 
        path.push_back(root->val);
        if(root->left==NULL and root->right==NULL){
            if(sum==target){
                ans.push_back(path);
                
            }
            
        }
        else{
            dfs(root->left,sum,target); 
            dfs(root->right,sum,target); 
            
}
        // backtracking so that we get new path each time and the previous nodes are removed from the path . 
        
        path.pop_back(); 
        
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        dfs(root,0,targetSum); 
        return ans; 
        
        
    }
};