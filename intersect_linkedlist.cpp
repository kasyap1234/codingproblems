class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*first=headA; 
        ListNode*second=headB; 
        ListNode*internode; 
        int flag; 
        
        while(first!=NULL){
            second=headB; 
            while(second!=NULL){
                if(&first==&second){
                    flag=1; 
                    internode=first; 
                }
                else{
                    flag=0; 
                }
                second=second->next; 
                
            }
            first=first->next; 
           
            
        }
        if(flag==1){
            return internode; 
        }
        else{
            return NULL; 
            
        }
        
    }
};
