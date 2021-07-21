
class Solution{
  public:
    
    int minDepth(Node *root) {
        // Your code here
        if(root==NULL){
            return 0; 
            
        }
        if(root->left==NULL && root->right==NULL){
            return 1 ; 
        }
        else if(root->left){
            return 1 + minDepth(root->left); 
            
        }
        else if (root->right){
            return 1 + minDepth(root->right); 
            
        }
        else{
            return 1 + min(minDepth(root->left),minDepth(root->right)); 
            
        }
    }
};

