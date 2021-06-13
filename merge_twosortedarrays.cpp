#include<iostream>
using namespace std; 
void merge(int arr1[], int arr2[], int n1, int n2, int arr3[]){
	int i=0; 
	int j=0; 
	int k=0; 
	while (i<n1 && j<n2){
		if (arr2[j]<arr1[i]){
			arr3[k++]=arr2[j++]; 


		}
		else{
			arr3[k++]=arr1[i++];

		}
		 while (i < n1)
        arr3[k++] = arr1[i++];
 
    
    while (j < n2)
        arr3[k++] = arr2[j++];
	}
}
