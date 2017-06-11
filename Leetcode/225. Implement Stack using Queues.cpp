class MyStack {
    deque<int> myStack;
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        myStack.push_back(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int temp = myStack.back();
        myStack.pop_back();
        return temp;
    }
    
    /** Get the top element. */
    int top() {
        return myStack.back();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return myStack.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */
