#include<iostream>
using namespace std; 
class Node{
public: 
    int data; 
    Node*next;

}; 
void detect_cycle(Node*head){
    Node*slow=head; 
    Node*fast=head; 
    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        fast=fast->next->next; 
        slow=slow->next; 
        if(slow==fast){
            return slow; 

        }

    }
    return NULL; 
    
}
