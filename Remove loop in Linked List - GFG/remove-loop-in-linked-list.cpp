// { Driver Code Starts
// driver code

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head)
{
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

int length(Node* head)
{
    int ret = 0;
    while(head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}


 // } Driver Code Ends
/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
   private:
   Node * floydAlgo(Node * &head){
       
       Node * fast = head;
       Node * slow = head;
       while(fast != NULL && fast -> next != NULL){
           fast = fast -> next -> next;
           slow = slow -> next;
           
           if(fast == slow){
               return slow;
           }
       }
       return NULL;
   }
   Node * getStartingPoint(Node * head){
       Node * intersectionPoint = floydAlgo(head);
       Node * slow = head;
       
       while(slow != intersectionPoint){
           slow = slow -> next;
           intersectionPoint = intersectionPoint -> next;
       }
       return slow;
   }
   
   public:
   //Function to remove a loop in the linked list.
   void removeLoop(Node* head)
   {
       // code here
       // just remove the loop without losing any nodes
       
       if(floydAlgo(head)){
           if(head == NULL){
           return ;
           }
       
       		Node * temp = getStartingPoint(head);
       		Node * temp2 = temp;
       		
       		while(temp2 -> next != temp){
           		temp2 = temp2 -> next;
       		}
       		temp2 -> next = NULL;
       }
       else{
           return ;
       }
   }
}; 


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        ob.removeLoop(head);
        
        if( isLoop(head) || length(head)!=n )
            cout<<"0\n";
        else
            cout<<"1\n";
    }
	return 0;
}
  // } Driver Code Ends