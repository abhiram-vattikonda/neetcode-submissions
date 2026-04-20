class MinStack {
public:
    int minVal;
    vector<int> stack, minStack;
    MinStack() {
        minVal = INT_MAX;
    }
    
    void push(int val) {
        stack.push_back(val);
        minVal = min(val, minVal);
        minStack.push_back(minVal);
    }
    
    void pop() {
        stack.pop_back();
        minStack.pop_back();
        if (minStack.empty()) 
        {minVal = INT_MAX; return;}
        minVal = minStack.back();
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return minStack.back();
    }
};
