## Printing subsequences whose sum is target. 

#include<iostream>
using namespace std; 

void printTargetSumSubset(vector<int>arr,int index, st  set, int sos, int target){
    if(index==arr.size()){
        if(sos==target){
            cout<<set<<endl; 

        }
       return; 
    } 
    printTargetSumSubset(arr,index+1,set + arr[index], sos + arr[index],target); 
    printTargetSumSubset(arr,index+1,set,sos,target); 
    
}
