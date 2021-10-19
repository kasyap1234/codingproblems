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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int end = nums.size();
        return constructMaximumBinaryTreeHelper(nums, 0, end - 1);
    }
    
    TreeNode* constructMaximumBinaryTreeHelper(vector<int>& nums, int start, int end) {
        if(start > end) {
            return NULL; 
            
        }
        
        int maxIndex = findMax(nums, start, end);
        TreeNode* node = new TreeNode(nums[maxIndex]);
        
        node->left = constructMaximumBinaryTreeHelper(nums, start, maxIndex - 1);
        node->right = constructMaximumBinaryTreeHelper(nums, maxIndex + 1, end);
            
        return node;
        
    }
    
private:
    int findMax(vector<int>& nums, int start, int end){
        int maxIndex = start;
        for(int i = start; i <= end; i++) {
            if(nums[i] > nums[maxIndex]) {
                maxIndex = i;
            }
        }
        
        return maxIndex;
    }
    }; 
    