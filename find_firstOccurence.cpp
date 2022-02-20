// first index of occurence in array using recursion; 
#include<iostream>
#include<vector>

using namespace std; 
int FindFirst(vector<int>array,int position,int element){
int FirstIndex=FindFirst(array,position+1,x); 
if(array[position]==x){
    return position; 
}
else{
    return FirstIndex; 
    
}
}
