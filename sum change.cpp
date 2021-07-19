#include<iostream>

using namespace std; 
class Node{
public: 

    int data; 
    Node*left; 
    Node*right; 
    Node(int val){
        data=val; 
        left=NULL; 
        right=NULL; 

    }

}; 
int sumchange(Node*root){
    if(root==NULL){
        return 0; 

    }
    root->data=sumchange(root->left)+sumchange(root->right)+ root->data; 
    return root->data; 
    
}
