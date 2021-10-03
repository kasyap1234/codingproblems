include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *addToEmpty(struct Node *head, int data)
{
    if (head != NULL)
    {
        return head;
    }
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = data;
    temp -> next = NULL;
    temp -> prev = NULL;
    return temp;
}

void traverse(struct Node *head)
{
    struct Node *p;
    if (head == NULL)
    {
        printf("No element present");
        return;
    }
    p = head;
    while(p -> next != NULL)
    {
        printf("%d ",p -> data);
        p = p -> next;
    }
    printf("%d \n",p->data);
    while(p != NULL)
    {
        printf("%d ",p -> data);
        p = p -> prev;
    }
}

struct Node *addEnd(struct Node *head, int data)
{
    if (head == NULL)
    {
        return addToEmpty(head, data);
    }
    struct Node *trav = head;
    while(trav -> next != NULL)
    {
        trav = trav -> next;
    }
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp -> data = data;
    temp -> next = NULL;
    trav -> next = temp;
    temp -> prev = trav;
    return head;
}

struct Node *solution(struct Node *head, int data)
{
    //Write your code here
    struct Node*t=head; 
 if(head==NULL){
 return NULL; 
 }
    if(head->next==NULL){
    return NULL; 
    }
   while(t->next->next!=NULL){
   t=t->next; 
   }
t->next->prev=NULL; 
t->next=NULL; 
return head; 
    
   
    
    
   
    
    
    
    
}

int main()
{
    int n,x;
    scanf("%d",&n);
    struct Node *head = NULL;
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        head = addEnd(head,x);
    }
    scanf("%d",&x);
    head = solution(head,x);
    traverse(head);
    return 0;
}
