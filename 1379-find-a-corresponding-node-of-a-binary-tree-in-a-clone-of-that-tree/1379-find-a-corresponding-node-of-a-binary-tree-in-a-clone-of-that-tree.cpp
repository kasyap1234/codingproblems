/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode *t;
    // In_order traversal :

    void in_order(TreeNode *root,TreeNode* tar){
        if(root==nullptr){
            return ;
        }
        in_order(root->left,tar);
        if(root->val==tar->val) {
            t=root;
        }
        in_order(root->right,tar);
        return ;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        in_order(cloned,target);
        return t;
    }
};