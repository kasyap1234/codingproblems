#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *addToEmpty(struct Node *last, int data)
{
    if (last != NULL)
    {
        return last;
    }
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = data;
    last = temp;
    last -> next = last;
    return last;
}

struct Node *addEnd(struct Node *last, int data)
{
    if (last == NULL)
    {
        return addToEmpty(last, data);
    }
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp -> data = data;
    temp -> next = last -> next;
    last -> next = temp;
    last = temp;
    return last;
}

void traverse(struct Node *last)
{
    struct Node *p;
    if (last == NULL)
    {
        return;
    }
    p = last -> next;
    do
    {
        printf("%d ",p -> data);
        p = p -> next;
    }
    while(p != last->next);
}
  
struct Node *solution(struct Node *last, int n)
{
   struct  Node* delete = NULL;
 
    // Start from head and find the Node to be
    // deleted
    if(last==NULL){
    printf("no element present"); 
        return NULL; 
        
        
     
    }
    if(last->data==n && last->next==last){
        free(last); 
        printf("no element present"); 
        return NULL; 
        
        
         
        
    }
  struct  Node* temp = last;
    while(temp->next!=last){
    temp=temp->next; 
    }
    if(temp->next->data==n){
    temp->next=NULL; 
    }
    temp=last; 
    
    do {
        // If we found the y, update xv
        if (temp->data == n)
            delete = temp; 
 
        temp = temp->next;
    }while(temp!=last); 
    
 
    // key occurs at-least once
    if (delete != NULL) {
 
        // Copy key of next Node to x
        delete->data = delete->next->data;
 
        // Store and unlink next
        
        delete->next = delete->next->next;
 
        // Free memory for next
         
    }
    return last; 
}
    


//Your program will be evaluated by this main method and several test cases.
int main()
{
    int n,x;
    scanf("%d",&n);
    struct Node *last = NULL;
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        last = addEnd(last,x);
    }
    scanf("%d",&x);
    last = solution(last,x);
    traverse(last);
    return 0;
}
