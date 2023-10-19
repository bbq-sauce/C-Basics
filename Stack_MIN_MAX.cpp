// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
using namespace std;

class MinMaxStack{
    private: 
        stack<int> mainStack;stack<int> minStack;stack<int> maxStack;
    public:
    void push(int val){
        mainStack.push(val);
        
        if(minStack.empty() || val<=minStack.top()){
            minStack.push(val);
        }
        if(maxStack.empty() || val>=maxStack.top()){
            maxStack.push(val);
        }
    }
    
    void pop(){
        if(!mainStack.empty()){
            int top= mainStack.top();
            mainStack.pop();
            
            if(top==minStack.top()){
                minStack.pop();
            }
            if(top==maxStack.top()){
                maxStack.pop();
            }
    
        }
    }
    
    int getMax(){
        if(!maxStack.empty()){
            return maxStack.top();
        }
        
    }
    
    int getMin(){
        if(!minStack.empty()){
            return minStack.top();
        }
        
    }
    
    bool empty(){
        return mainStack.empty();
    }
};

int main() {
    
    MinMaxStack stack;

    stack.push(5);
    stack.push(2);
    stack.push(8);

    cout << "Minimum: " << stack.getMin() << endl; // Output: Minimum: 2
    cout << "Maximum: " << stack.getMax() << endl; // Output: Maximum: 8

    stack.pop();
    stack.pop();

    cout << "Minimum: " << stack.getMin() << endl; // Output: Minimum: 5
    cout << "Maximum: " << stack.getMax() << endl; // Output: Maximum: 5

    stack.push(3);
    stack.push(1);

    cout << "Minimum: " << stack.getMin() << endl; // Output: Minimum: 1
    cout << "Maximum: " << stack.getMax() << endl; // Output: Maximum: 5
    
    return 0;
}
