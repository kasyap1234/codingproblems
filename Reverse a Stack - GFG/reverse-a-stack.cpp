// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:

void bottom(stack<int> &st,int x){
   if(st.empty()){
       st.push(x);
       return;
   }
   int num=st.top();
   st.pop();
   bottom(st,x);
   st.push(num);
}

void rev(stack<int> &st){
   if(st.empty()){
       return;
   }
   int num=st.top();
   st.pop();
   rev(st);
   bottom(st,num);
}
   vector<int> Reverse(stack<int> st){
       vector<int> vc;
       rev(st);
       int n=st.size();
       while(!st.empty()){
           vc.push_back(st.top());
           st.pop();
       }
       reverse(vc.begin(),vc.end());
       return vc;
   }
};
// { Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        vector<int> ans=ob.Reverse(St);
        for(int i=0;i<N;i++){
            cout<<ans[i];
            if(i!=N-1) cout<<" ";
        }
        cout<<endl;
    }
}  // } Driver Code Ends