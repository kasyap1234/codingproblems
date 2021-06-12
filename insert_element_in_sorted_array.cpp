#include<iostream>
using namespace std; 
int main(){
	arr[]={1,4,7,13,25,34,48}; 
	x=18; 
	// to insert 18 such that the array remains sorted you start from the end; 
	int i; 
	i=6; 
	while(arr[i]>x){
		arr[i+1]=arr[i]; 
		i--; 
	}
	arr[i+1]=x; 
}
