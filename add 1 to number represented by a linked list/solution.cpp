class Solution
{
    private:
      private:
    struct Node* reverse(struct Node* head){
         Node* curr = head;
         Node* pre = NULL;
         Node* next = NULL;
        
        while(curr != NULL){
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        return pre;
    }
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int d){
         Node* temp = new Node(d);
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }
    
    struct Node* sum(struct Node* first, struct Node* second){
        int carry = 0;
         Node* ansHead = NULL;
         Node* ansTail = NULL;
        
        while(first != NULL || second != NULL ||  carry !=0){
            int val1 = 0;
            if(first != NULL)
            val1 = first->data;
            
            int val2 = 0;
            if(second != NULL)
            val2 = second->data;
            
            int add = val1 + val2 +carry;
            int digit = add%10;
            insertAtTail(ansHead, ansTail, digit);
            carry = add/10;
            
            if(first != NULL)
            first = first->next;
            
            if(second != NULL)
            second = second->next;
        }
        return ansHead;
    }
    
    
    public:
    Node* addOne(Node *head) 
    {
        
        Node* first = head;
        Node* second = new Node(1);

        first = reverse(first);
        second = reverse(second);
        
         Node* ans = sum(first, second);
        
        ans = reverse(ans);
        
        return ans;


    }
};
