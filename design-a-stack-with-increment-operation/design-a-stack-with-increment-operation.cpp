class CustomStack {
public:
    int size; 
    vector<int>v; 
    
    CustomStack(int maxSize) {
        size=maxSize; 
        
    }
    
    void push(int x) {
        if(v.size()<size){
            v.push_back(x); 
            
        }
        
    }
    
    int pop() {
        if(!v.empty()){
            int top=v.back(); 
            v.pop_back(); 
            return top ; 
            
        }
        return -1; 
        
    }
    
    void increment(int k, int val) {
       if(v.size()<k) {
      for(int i=0;i<v.size();i++)      {
                v[i]+=val; 
                
            }     
       }
        else{
            for(int i=0; i<k;i++){
                v[i]+=val; 
                
            }
            
        }
        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */