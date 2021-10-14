class Solution{
  public:
    /*You are required to complete this function*/
    int getLevelDiff(Node *root)
    {
       //Your code here
  
    
queue<Node*>q;
q.push(root);
int count = 0;
int eSum = 0, oSum = 0;
while(!q.empty()){
int s = q.size();
int lSum = 0;
for(int i = 0; i < s; i++){
Node * temp = q.front();
lSum += temp->data;
q.pop();
if(temp->left != NULL){
q.push(temp->left);
}
if(temp->right != NULL){
q.push(temp->right);
}
}
if((count + 1) % 2 == 0){
eSum += lSum;
} else {
oSum += lSum;
}
count++;
}
int ans = oSum - eSum;
return ans;
    }
   
};
