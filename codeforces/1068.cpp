#include<bits/stdc++.h>
using namespace std;
stack<char>stk;
bool Balanced(string str){
    for(int i=0;i<str.size();i++){
        if(stk.empty()){
            if(str[i]==')'){
                stk.push(str[i]);
            }else if(str[i]=='('){
                stk.push(str[i]);
            }
        }else if(str[i]==')' && stk.top()=='('){
            stk.pop();
        }else if(str[i]=='(' || str[i]==')'){
            stk.push(str[i]);
        }
    }
    if(stk.empty())
        return true;
    return false;
}
int main(){
        string str;cin>>str;
        if(Balanced(str)){
            cout<<"correct\n";
        }else{
            cout<<"incorrect\n";
        }
    return 0;
}