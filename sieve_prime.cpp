#include<iostream> 
using namespace std; 
void primesieve(int n){
int prime[1000]={0}; 
for(int i=2;i<=n;i++){
  if(prime[i]==0){
    for(int j=i*i;j<=n;j=j+i){
       prime[j]=1;
       
         
       }
     }
   }
   for(int i=2;i<=n;i++){
     if (prime[i]==0{
     cout <<i<< " "; 
   }
   }
