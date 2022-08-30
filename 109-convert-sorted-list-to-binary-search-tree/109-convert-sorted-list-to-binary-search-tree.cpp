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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    TreeNode* solve(vector <int> &v,int left,int right)
    {
        if(left>right)
        {
            return NULL;
        }
        int mid=(left+right)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=solve(v,left,mid-1);
        root->right=solve(v,mid+1,right);
        return root;
        
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
     
        ListNode* temp=head;
        vector<int> v;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        TreeNode* ans;
        ans=solve(v,0,v.size()-1);
        return ans;
    }

};