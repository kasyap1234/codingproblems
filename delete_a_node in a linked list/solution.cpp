Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node*temp=head; 
    if(x==1){
        return head->next; 
    }
    else{
         int count=1; 
         while(temp!=NULL and count+1!=x){
             temp=temp->next; 
             count++; 
             
         }
         Node*next_node=temp->next->next; 
         free(temp->next); 
         temp->next=next_node; 
         return head; 
         
    }
    
}
