// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* findMid(Node* head)
    {
        Node* fast = head->next;
        Node* slow = head;
        
        while(fast!= NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        return slow;
    }
    
    
    Node* reverse(Node* head)
    {
        Node *prev = NULL;
        Node *curr = head;
        Node *forw = NULL;
        while(curr != NULL)
        {
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }
         
        return prev;
    }
    
    bool isPalindrome(Node *head)
    {
        if(head->next == NULL)
            return true;
        
        //STEP 1: FIND MID 
        Node* middle = findMid(head);
        //STEP 2 : REVERSE FROM MID
        Node* temp = middle->next;
        middle->next = reverse(temp);
        
        //STEP 3 : CHECK FROM HEAD & MID + 1
        Node* fromHead = head;
        Node* fromMiddle = middle->next;
        while(fromMiddle != NULL)
        {
            if(fromMiddle->data == fromHead->data)
            {
                fromMiddle = fromMiddle->next;
                fromHead = fromHead->next;
            }
            else
                return false;
        }
        
        temp = middle->next;
        middle->next = reverse(temp);
        return true;
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends