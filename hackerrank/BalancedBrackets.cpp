#include<bits/stdc++.h>
using namespace std;
bool checkBrackets(string str){
    stack<char>stk;
    for(int i=0;i<(int)str.size();i++){
        if(stk.empty()){
            if(str[i]=='(' || str[i]=='{' || str[i]=='['){
                stk.push(str[i]);
            }
        }else if((stk.top()=='(' && str[i]==')') || (stk.top()=='{' && str[i]=='}') ||(stk.top()=='[' && str[i]==']')){
            stk.pop();
        }else{
            stk.push(str[i]);
        }
    }
    if(stk.empty()){
        return true;
    }
    return false;
}
int main(){
    int n;string str;cin>>n;while(n--){
        cin>>str;
        if(checkBrackets(str)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}