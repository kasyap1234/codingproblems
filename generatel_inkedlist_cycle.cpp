#include<iostream>
using namespace std; 
class Node {
public: 

    int data; 
    Node*next; 
}; 
void createcycle(Node*p, position){
    Node*cur=head; 
    Node*startnode; 
    int count =1; 
    while(cur!=NULL){
        if(count==position){
            startnode=cur; 


        }
        cur=cur->next; 
        count++; 

    }
    temp->next=startnode ; 
    // here startnode is the node at which a cycle is generated or it can be called as the starting point of the cycle. 
    

}
