int getMiddle(Node *head)
{
   // Your code here
   Node*temp=head; 
   int count =0; 
   int length; 
   int position=0; 
   while(temp!=NULL){
       count+=1; 
       temp=temp->next; 
       
   }
   length=count; 
   temp=head; 
   if(length==1){
       return temp->data; 
   }
   while(temp!=NULL){
       position+=1; 
       temp=temp->next; 
      if(length%2==0){ 
       if(position==(length/2)){
           return temp->data; 
       }
   }
   else{
       if(position==(length/2)){
           return temp->data; 
           
       }
   }
}
}
