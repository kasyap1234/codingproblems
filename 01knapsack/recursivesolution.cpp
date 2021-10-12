#include<iostream>
using namespace std; 
// capacity of the container  is W; 

// weight[] array of the weights of the items 
// value[] array represents the profit / value associated with each weight
// n is the number of items  
int knapsack(int weight[],int value[],int n,int W){
    if (n==0||W==0){
        return 0; 
    }
    else{
        if(weight[n-1]<=W){
            return max((value[n-1]+ knapsack(weight,value,n-1,W-weight[n-1])),knapsack(weight,value,n-1,W)); 
            
        }
        else{
            return knapsack(weight,value,n-1,W); 
            
        }
    }
}
