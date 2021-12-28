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
   vector<int>v;
    void ans(TreeNode* root){
        if(root==NULL)
            return;
        ans(root->left);
         v.push_back(root->val);
        ans(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
       int min1 = INT_MAX;
        ans(root);
        for(int i=0;i<v.size()-1;i++){
            min1 = min(min1,abs(v[i]-v[i+1]));
        }
        return min1;
    }
};