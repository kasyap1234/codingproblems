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
    ListNode* swapNodes(ListNode* head, int k) {
vector<int>arr;
auto ans=head , x=head;
while(head)
{
   arr.push_back(head->val);
    head=head->next;
}
swap(arr[k-1] , arr[arr.size()-k]);
int i=0;
while(ans)
{
   ans->val=arr[i++];
   ans=ans->next;
}
        return x;
    }
};