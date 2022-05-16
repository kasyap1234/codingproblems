    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
    unordered_set<int>s; 
    Node*temp=head1; 
    while(temp){
        s.insert(temp->data); 
        temp=temp->next; 
        
    }
    int count=0; 
    Node*cur=head2; 
    while(cur){
        if(s.find(x-cur->data)!=s.end()){
            count++; 
        }
        cur=cur->next; 
        
    }
    
    return count; 
    
    }
