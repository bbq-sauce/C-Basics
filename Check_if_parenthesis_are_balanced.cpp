#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

bool areParbal(const string exp){
    stack<char> parstack;
    
    for(char c: exp){
        if(c=='(' ||c=='{' ||c=='['){
            parstack.push(c);
        }
        else if(c==')' ||c=='}' ||c==']'){
            if(parstack.empty()){
                return false;
            }
            
            char top=parstack.top();
            parstack.pop();
            
            if((c==')'&&top!='(') || (c=='}'&&top!='{') || (c==']'&&top!='[')){
                return false;
            }
        }
    }
    return parstack.empty();
}
int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    string exp ="{(a+b)*(c+d)";
    if(areParbal(exp)){
        cout<<"yes";
    }
    else{cout<<"no";}

    return 0;
}
