#include<bits/stdc++.h>
using namespace std;

void revString(string &s){
    int left=0;
    int right=s.length()-1;
    
    while(left<right){
        swap(s[left],s[right]);
        left++;right--;
    }
}

int main(){
    string str="hello";
    cout << "Original String: " << str << endl;

    revString(str);
    cout << "Reversed String: " << str << endl;
    return 0;
}
