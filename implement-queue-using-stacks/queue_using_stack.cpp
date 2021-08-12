
class MyQueue {
public:
    stack<int> temp, ans;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        temp.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        // shift input to output 
        if (ans.empty())
            while (temp.size())
                ans.push(temp.top()), temp.pop();

        int x = ans.top();
        ans.pop(); 
        return x; 
    }
    
    /** Get the front element. */
    int peek() {
        // shift input to output 
        if (ans.empty())
            while (temp.size())
                ans.push(temp.top()), temp.pop();
        return ans.top(); 
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return temp.empty() && ans.empty();
    }

};
