class MyLinkedList {
    
    struct ListNode
    {
        int val;
        ListNode* next;
        ListNode( int x)
        {
            val=x;
            next=NULL;
        }
    };
public:
    ListNode* first=NULL;
    ListNode* last=NULL;
    int len=0;
    /** Initialize your data structure here. */
    MyLinkedList() {
        //keep track of first and last pointers
        
        
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index<len)
        {
            ListNode* curr=first;
            int currInd=0;
            while(currInd!=index)
            {
                currInd++;
                curr=curr->next;
            }
            return curr->val;
        }
        return -1;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        ListNode* node=new ListNode(val);
        node->next=first;
        first=node;
        len++;
        if(last==NULL)
            last=first;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        ListNode* node=new ListNode(val);
        if(last)
            last->next=node;
        last=node;
        if(first==NULL)
            first=node;
        len++;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        
        if(index>len)
            return ;
        if(index==len)
            addAtTail(val);
        else if(index==0)
            addAtHead(val);
        else{
            ListNode* curr=first;
            int currInd=0;
            while(currInd!=index-1)
            {
                currInd++;
                curr=curr->next;
            }
            ListNode* node=new ListNode(val);
            node->next=curr->next;
            curr->next=node;
            len++;
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index>=len)
            return ;
        if(index==0)
        {
            first=first->next;
            len--;
            if(first==NULL)
                last=NULL;
            return;
        }
        int currInd=0;
        ListNode* curr=first;
        while(currInd!=index-1)
        {
            currInd++;
            curr=curr->next;
        }
        if(index==len-1)
            last=curr;
        curr->next=curr->next->next;
        len--;
    }
};

