class Solution {
public:
    int preorderIndex=0; 
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>umap; 
        
        return createTree(preorder,inorder,0,preorder.size()-1,umap); 
        
        
    }
    TreeNode* createTree(vector<int>&preorder,vector<int>& inorder,int left,int right,unordered_map<int,int>&umap){
        
        for(int i=0;i<inorder.size();i++){
            umap[inorder[i]]=i; 
        }
       
        if(left>right){
            return NULL; 
        }
        int root_value=preorder[preorderIndex++]; 
       TreeNode*  root= new TreeNode(root_value); 
        int inIndex=umap[root_value]; 
        root->left=createTree(preorder,inorder,left,inIndex-1,umap); 
        root->right=createTree(preorder,inorder,inIndex+1,right,umap); 
        return root; 
        
    }
};