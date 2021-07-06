// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    Node*temp=head; 
    if(head=NULL){
        return NULL; 
        
    }
    if(head->next==NULL){
        return head; 
        
    }
    int position=0; 
    int count=0; 
    while(temp!=NULL){
        temp=temp->next; 
        count+=1; 
    }
    temp=head; 
    Node*mid; 
    
    while(temp!=NULL){
         temp=temp->next; 
         position+=1; 
        if(position==(count/2)-1){
           
            mid=temp->next; 
            
           temp->next=temp->next->next;
           free(mid); 
           return head; 
           
           
            
        }
    }
    
