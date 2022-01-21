class MinStack {
public:
    stack<long long int>s;
    long long int  m;
    MinStack() {
    
}

void push(long long val) {
    if(s.empty()){
        m=val;
    }else if(val<m){
        long long a=2*1ll*val-m;
        m=val;
        val=a;
    }
    s.push(val);
}

void pop() {
    if(s.top()<m){
        m=2*1ll*m-s.top();
    }
    s.pop();
}

int top() {
    if(s.top()<m){
        return m;
    }
    else{
        return s.top();
    }
}

int getMin() {
    return m;
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