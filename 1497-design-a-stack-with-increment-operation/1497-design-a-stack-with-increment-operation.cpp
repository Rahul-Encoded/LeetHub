class CustomStack {
public:
    int size;
    vector<int> myStack;

    CustomStack(int maxSize) {
        size = maxSize;
    }
    
    void push(int x) {
        if(myStack.size() < size){
            myStack.push_back(x);
        }
    }
    
    int pop() {
        if(myStack.size() == 0) return -1;
        int topElement = myStack[myStack.size()-1];
        myStack.pop_back();
        return topElement;
    }
    
    void increment(int k, int val) {
        int inc = min(k, (int)myStack.size());

        for(int i = 0; i < inc; i++){
            myStack[i] += val; 
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