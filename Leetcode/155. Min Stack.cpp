class MinStack {
    vector<int> s;
    vector<int> mini;
public:
    /** initialize your data structure here. */
    MinStack() {

    }
    
    void push(int x) {
        cout << "one\n";
        s.push_back(x);
        if(!mini.empty() && mini.back() >= x){ 
            mini.push_back(x);
            cout << "two\n";
        }
        else{ 
            mini.insert(mini.begin(), x);
            cout << "three\n";
        }
    }
    
    void pop() {
        if(s.back()==mini.back()){
            mini.pop_back();
            cout << "four\n";
        }
        cout << "five\n";
        s.pop_back();
    }
    
    int top() {
        cout << "six\n";
        return s.back();
    }
    
    int getMin() {
        cout << "seven\n";
        return mini.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
