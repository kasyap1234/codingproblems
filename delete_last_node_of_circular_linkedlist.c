#include<stdio.h>

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
    p = last->next;
    
    do
    {
        printf("%d ",p -> data);
        p = p -> next;
    }
    while(p != last);
}
  
struct Node *solution(struct Node *last) {
    //Write your code here
struct Node*p=last;
    if(last==NULL){
        printf("no element present"); 
    return NULL; }
    struct Node*q=last->next; 
    //using two pointers to ensure that the last node is deleted
		do
		{
		p=p->next; 
            q=q->next; 
            
		}while(q!=last); 
	    p->next=last ; 
    
    
    
    
		
	 
    
   return last ;
    
    
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
    last = solution(last);
    traverse(last);
    return 0;
}
