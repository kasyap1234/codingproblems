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
    int sum = 0;
    int height(TreeNode *node){// finding height of tree
        if(node == NULL)
            return 0;
        return 1+max(height(node->left),height(node->right));
    }
    void dfs(TreeNode* node, int curr, int hi){
        if(node == NULL)
            return;
        if(curr == hi)// if node is deepest add val to sum 
        {
            sum += node->val;
            return;
        }
   
        if(node->left != NULL)
            dfs(node->left, curr+1, hi); 
        if(node->right != NULL)
            dfs(node->right, curr+1, hi);
    }
    int deepestLeavesSum(TreeNode* root) {
        int l = height(root->left);
        int h = height(root->right);
        int hi = max(l, h);
        if(root->left != NULL)
            dfs(root->left, 1, hi);  
        if(root->right != NULL)
            dfs(root->right, 1, hi);
        return sum;
    }
};