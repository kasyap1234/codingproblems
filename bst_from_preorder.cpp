class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()==0){
            return NULL; 
            
        }
        
        TreeNode*root=new TreeNode(preorder[0]); 
       if(preorder.size()==1){
           return root; 
       }
        vector<int>ltree; 
        vector<int>rtree; 
        for(int i=1;i<preorder.size();i++){
            if(preorder[i]>preorder[0]){
                rtree.push_back(preorder[i]); 
            }
            else{
                ltree.push_back(preorder[i]); 
                
            }
             
             
            
        }
        root->left=bstFromPreorder(ltree); 
            root->right=bstFromPreorder(rtree);
        return root; 
        
    }
};
