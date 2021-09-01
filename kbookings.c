#include<stdio.h>
#include<stdlib.h>
int compare(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main()
{
    int n; 
    int flag; 
    
    
    scanf("%d",&n); 
    int arrival[n]; 
    int departure[n]; 
    for(int i=0;i<n;i++){
    scanf("%d",&arrival[i]); 
    }
    for(int i=0;i<n;i++){
    scanf("%d",&departure[i]); 
    }
    int k ; 
    scanf("%d",&k); 
    qsort(arrival, n, sizeof(int), compare);
    qsort(departure, n, sizeof(int), compare);
    
    
     for(int i = 0; i < n; i++)
    {
        if (i + k < n && arrival[i + k] < departure[i])
        {
            flag=0; 
        }
    }
    
   flag=1; 
    

if(flag==0){
printf("Yes"); }
    else{
    printf("No"); 
    }

    //write your code here
}
