**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    static int count=0; 
    Tree*temp=root; 
    if(temp==NULL){
        return count; 

    }
    if((temp->left==NULL && temp->right!=NULL)|| (temp->right==NULL && temp->left!=NULL) ){
        count ++; 

    }
    if(temp->left==NULL && temp->right==NULL){
        return count ; 

    }
    solve(temp->left); 
    solve(temp->right); 
    
    return count; 

}
