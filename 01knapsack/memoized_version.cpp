#include<iostream>
using namespace std; 

// we  create a matrix with the dimensions as w+1 and n+1 as they are the only variables whose values keep on changing 

int knapsack(int weight[],int value[],int n,int W){
  int dp[n+1][W+1]-1; 
  
if(n==0||W==0){
return 0; 
}
  if(dp[n][W]=-1){
  return -1; 
  }
   else{
        if(weight[n-1]<=W){
            return dp [n][W]=max((value[n-1]+ knapsack(weight,value,n-1,W-weight[n-1])),knapsack(weight,value,n-1,W)); 
            
        }
        else{
            return  dp[n][w]=knapsack(weight,value,n-1,W); 

        }
    }
}

}
