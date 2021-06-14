#include<iostream> 
using namespace std; 
int main(){
	int arr[13]={1,2,3,4,5,6,6,8,8,8,9,10,11}; 
	int i=0; 
	int last_duplicate=0; 

	for(i=0;i<13;i++){
		if(arr[i]==arr[i+1] && arr[i]!=last_duplicate){
			cout<<arr[i]<< endl;
			last_duplicate=arr[i]; 


		}
	}
}
