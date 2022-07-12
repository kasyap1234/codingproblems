class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        int zeroCount=0; 
        int oneCount=0; 
        int twoCount=0; 
        Node*temp=head; 
        while(temp!=NULL){
            if(temp->data==0){
                zeroCount++; 
            }
            if(temp->data==1){
                oneCount++; 
            }
            if(temp->data==2){
                twoCount++; 
            }
            temp=temp->next; 
            
            
        }
        temp=head;
        while(zeroCount){
            temp->data=0; 
            temp=temp->next; 
            zeroCount--; 
            
        }
        while(oneCount){
            temp->data=1; 
            temp=temp->next; 
            oneCount--; 
        }
        while(twoCount){
            temp->data=2; 
            temp=temp->next; 
            twoCount--; 
            
        }
        return head; 
        
    }
};
