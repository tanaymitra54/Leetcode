class MinStack {
public:
    stack<int> st,minSt;
    MinStack() {
        
    }
    
    void push(int val) {
        
        if(minSt.empty() || minSt.top() >= val){
            minSt.push(val);//in min stack we only enter the values if the incoming value is smaller than the current top or the stack is empty
        }
        st.push(val);//all the incoming values gets pushed into the main stack
    }
    
    void pop() {
        
        if(st.top() == minSt.top()){
            minSt.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */