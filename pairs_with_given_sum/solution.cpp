class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        int count=0; 
        Node*temp1=head1; 
        Node*temp2=head2; 
        while(temp1!=NULL){
            while(temp2!=NULL){
                if(temp1->data + temp2->data==x){
                    count+=1; 
                }
                temp2=temp2->next; 
            }
            temp2=head2; 
            
            temp1=temp1->next; 
            
        }
        return count ; 
    }
};
