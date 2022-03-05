#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
bool checkPalindrome(string str, int i,int j){
	if(i>j){
		return true; 

	}
	if(str[i]!=str[j]){
		return false; 

	}
	return checkPalindrome(str,i+1,j-1); 

}

int main() {
	// Your code goes here;
string name="madam"; 
cout<< checkPalindrome(name,0,name.length()-1);
 

	return 0;
}
