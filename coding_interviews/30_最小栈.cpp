class Solution {
public:
    void push(int value) {
        allNumber.push(value);
        if(minNumber.size() == 0 || value <= minNumber.top()){
            minNumber.push(value);
        }else{
            minNumber.push(minNumber.top());
        }
        
    }
    void pop() {
        allNumber.pop();
        minNumber.pop();
    }
    int top() {
        return allNumber.top();
    }
    int min() {
        return minNumber.top();
    }
    
    stack<int> allNumber;
    stack<int> minNumber;
    
    
};