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
    vector<int>traverse(TreeNode*root,vector<int>&ans){
if(root){
    ans.push_back(root->val); 
    traverse(root->left,ans); 
    traverse(root->right,ans); 
    
}
    return ans; 
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>ans; 
        
        traverse(root,ans); 
        
        unordered_map<int,int>mp; 
        for(int i=0;i<ans.size();i++){
            mp[ans[i]]++; 
            
        }
      // now we have the hashmap with the frequencies and the number  ; we need to find the mode; 
        int mode; 
        int freq=0; 
       for(auto itr=mp.begin();itr!=mp.end();itr++){
             if(freq<itr->second){
                 freq=itr->second; 
                 
             }
           
           
       }
        vector<int>sol; 
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            if(itr->second==freq){
                sol.push_back(itr->first); 
                
            }
            
        }
        return sol ; 
    }
};