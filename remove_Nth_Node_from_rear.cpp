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
    int count=0; 
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode*temp=head; 
        while(temp!=NULL){
            temp=temp->next; 
            count++; 
        }
        temp=head; 
        int pos=count-n; 
        while(pos>1){
            temp=temp->next; 
            pos--; 
        }
        temp->next=temp->next->next; 
        return head ;
        
        
    }
};
