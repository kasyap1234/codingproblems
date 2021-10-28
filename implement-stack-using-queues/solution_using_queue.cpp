class MyStack {
   
    queue<int>st; 
public:
    MyStack() {
         
    }
    
    void push(int x) {
        st.push(x); 
        
    }
    
    int pop() {
        int len=st.size(); 
        for(int i=0;i<len-1;i++){
            st.push(st.front()); 
            st.pop(); 
        }
        int val=st.front(); 
        st.pop(); 
        return val; 
        
        
    }
    
    int top() {
        return st.back(); 
        
        
    }
    
    bool empty() {
        return st.empty(); 
        
    }
};
