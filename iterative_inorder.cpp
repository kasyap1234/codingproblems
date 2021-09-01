class Solution {
public:
    vector<int> inOrder(Node* root)
{
    //code here
    vector<int>ans;
    stack<Node*>s;
    if(root==NULL){
        return ans;
    }
    Node * curr = root;
    while(curr!=NULL || !s.empty()){
        while(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        ans.push_back(s.top()->data);
        curr=s.top()->right;
        s.pop();
    }
    return ans;
    
    
    
    
}
        
        //code here
    
};
