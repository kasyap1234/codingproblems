// first index of occurence in array using recursion; 
#include<iostream>
#include<vector>

using namespace std; 
int FindFirst(vector<int>array,int position,int element){
    if(position==array.size()-1){
    return -1; }
    int FirstIndex=FindFirst(array,position+1,x); 
if(array[position]==x){
    return position; 
}
else{
    return FirstIndex; 
    
}
}
