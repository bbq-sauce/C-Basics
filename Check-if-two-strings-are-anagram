#include<bits/stdc++.h>
using namespace std;

bool areAnagram(const string &s1,const string &s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    
    int charCount[26]={0};
    
    for(char c: s1){
        charCount[c-'a']++;
    }
    for(char c: s2){
        charCount[c-'a']--;
    }
    
    for(int i=0;i<26;i++){
        if(charCount[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){
    string str1="hello";
    string str2="eello";
    
    if(areAnagram(str1,str2)){
        cout<<"yes";
        
    }
    else{
        cout<<"no";
    }
    return 0;
}
