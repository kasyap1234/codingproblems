#include<iostream> 
using namespace std; 

int main(){
    int arr[6]={3,4,5,2,1,6}; 
     
    int i,j; 
    for(i=0;i<=5;i++){
        int sum=0; 
        for(j=0;j<=i;j++){
            sum+=arr[j]; 


        }
        cout << sum<<endl  ; 

    }
}
