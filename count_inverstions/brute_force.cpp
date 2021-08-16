#include<iostream>
using namespace std; 
int main(){
    int count=0; 
    int i,j=0; 
    int arr[8]={3,5,6,9,1,2,7,8} ; 

    for(i=0;i<8;i++){
        for(j=i+1;j<8;j++){
            if(arr[i]>arr[j]){
                count ++; 

            }
        }
    }
     cout<<count<<endl; 
    return count ; 
   


}
