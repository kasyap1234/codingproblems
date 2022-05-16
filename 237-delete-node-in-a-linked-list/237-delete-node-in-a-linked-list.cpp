/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode*dele=node; 
        dele->val=node->next->val; 
        ListNode*next=node->next->next; 
        node->next=next; 
        
    }
};