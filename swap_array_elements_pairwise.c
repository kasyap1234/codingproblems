#include<stdio.h>
int  solution(int *A, int N)
{
    int i=0; 
    int j=1; 
    int save=A[N-1]; 
    
    if(N==1){
        printf("%d",A[0]); 
        
return A[0]; 
        
    }
    if(N==0){
    printf("no element present");
    return 0; 
    }
// if the elements are even ; 
if(N%2==0){
    while(i<N){
        int temp=A[j]; 
        A[j]=A[i]; 
        A[i]=temp; 
        i=i+2; 
        j=j+2; 
        
    }
}
    // if the elements are odd; 
    
else{
     while(i<N){
         //swapping the elements; 
         
        int temp=A[j]; 
        A[j]=A[i]; 
        A[i]=temp; 
        i=i+2; 
        j=j+2; 
        
     }
    A[N-1]=save; 
    
}
    
    
    

    

    
    
  
    for(int k=0;k<N;k++){
    printf("%d ",A[k]); 
    }
    return 0; 
    
}

//Your program will be evaluated by this main method and several test cases.
int main()
{
    int *A,N,i;
    scanf("%d",&N);
    A = (int *)malloc(sizeof(int)*N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
 solution(A,N);
    
  
}
