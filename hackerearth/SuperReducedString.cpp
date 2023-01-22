#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    stack<char>stk;
    for(int i=0;i<(int)str.size();i++){
        if(stk.empty()){
            stk.push(str[i]);
        }else if(stk.top()==str[i]){
            stk.pop();
        }else{
            stk.push(str[i]);
        }
    }
    string ptr;
    if(stk.empty()){
        cout<<"Empty String\n";
    }else{
        while(!stk.empty()){
            ptr.push_back(stk.top());
            stk.pop();
        }
        for(int i=(int)ptr.size()-1;i>=0;i--){
            cout<<ptr[i];
        }
    }
}