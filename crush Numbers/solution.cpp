#include<iostream>
using namespace std; 
int sum(int n){
    int add=0; 
    while(n>0){
        add+=n%10; 
        n=n/10; 
        
    }
    return add; 
    
    
}
int crush(int n){
int count=0; 
while(n>0){
   n=n-sum(n); 
    count++; 
    
}
    return count ; 
}
int main(){
    int n; 
    cin>>n; 
    cout<<crush(n)<<endl; 
    
}
