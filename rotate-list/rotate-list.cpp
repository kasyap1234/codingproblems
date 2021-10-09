/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head ; 
            
        }
        ListNode*temp; 
        ListNode*dupe=head ; 
        int len=0; 
        while(dupe!=NULL){
            dupe=dupe->next; 
            len++; 
            
        }
        if(k>len){
          k=k%len; 
            
            
        }
        while(k--){
            ListNode*prev=head; 
            ListNode*cur=head->next; 
            while(cur!=NULL and cur->next!=NULL){
                prev=prev->next; 
                cur=cur->next; 
                
            }
            cur->next=head; 
            prev->next=NULL; 
            head=cur; 
            
            
        }
        return head ; 
        
    }
};