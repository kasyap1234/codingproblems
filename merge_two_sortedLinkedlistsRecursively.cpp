/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {


    ListNode*head=NULL; 
   if (A==NULL and B==NULL){
       return A; 
   }
   if(A==NULL and B!=NULL){
       return B; 

   }
   if(A!=NULL and B==NULL){
       return A; 
   }

    if(A->val<B->val){
        head=A; 
        A->next=mergeTwoLists(A->next,B);  
    }
    if(B->val<=A->val){
        head=B; 
        B->next=mergeTwoLists(B->next,A); 

    }
     return head; 

     
    
}
