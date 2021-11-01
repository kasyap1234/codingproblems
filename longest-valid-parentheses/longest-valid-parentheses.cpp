#include<algorithm>


class Solution {
public:
    int longestValidParentheses(string s) {
        stack<char>character; 
        stack<int>index; 
        index.push(-1); 
        int len; 
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                character.push('('); 
                index.push(i); 
            }
            else{
                if(!character.empty() && character.top()=='('){
                    character.pop(); 
                    index.pop(); 
                    len=max(len,i-index.top()); 
                }
                else{
                    index.push(i); 
                    
                }
            }
        }
        return len; 
        
    }
};