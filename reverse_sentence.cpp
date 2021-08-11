#include<iostream>
using namespace std; 
#include<stack> 
void reverse(string s){
    stack<string>stak; 

    string str=""; 
    int i=0; 
    
for(int j=0;j<s.length();j++){


    while(s[i]!=' ' && i<s.length()){
        str+=s[i]; 
        i++; 

    }
    stak.push(str); 

}
while(!stak.empty()){
    cout<<stak.top()<<"" ; 

    stak.pop(); 


}
}
int main(){
    string s="what is your name?"; 
    reverse(s); 

}
