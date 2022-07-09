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
    bool isPalindrome(ListNode* head) {
        vector<int>llist; 
        ListNode*temp=head; 
        while (temp!=NULL){
            llist.push_back(temp->val); 
            temp=temp->next; 
        }
        int left=0; 
        int right=llist.size()-1; 
        while(left<right){
            if(llist[left]!=llist[right]){
                return false; 
            }
            left++; 
            right--; 
        }
        return true; 
        
    }
};