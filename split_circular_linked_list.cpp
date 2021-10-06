void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node*slow=head; 
    Node*fast=head; 
    if(head==NULL){
        return ; 
        
    }
    while(fast->next!=head && fast->next->next!=head){
        fast=fast->next->next; 
        slow=slow->next; 
    }
    *head1_ref=head; 
    *head2_ref=slow->next;
    slow->next=head; 
    fast->next=*head2_ref; 
    
    
    
    
    // your code goes here
}
