#include<iostream>
using namespace std;
void reverse(string s){


if (s.length==0){
  return ;

}
string rem=s.substring(1);
reverse(rem);
cout <<s[0];
}
int main(){
  reverse("dadouriser");
  return 0;

}
