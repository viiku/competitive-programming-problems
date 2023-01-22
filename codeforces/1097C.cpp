#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        string str;cin>>str;
        stack<int>stk;
        for(int i=0;i<str.size()-1;i++){
            if(str[i]=='('){
                stk.push(i);
                if(str[i+1]==')'){
                    stk.pop();
                }
            }else if(str[i]=='{'){
                stk.push(i);
                if(str[i+1]=='}'){
                    stk.pop();
                }
            }else if(str[i]=='['){
                stk.push(i);
                if(str[i+1]==']'){
                    stk.pop();
                }
            }
        }
        if(stk.size()==0){
            cout<<str.size()<<"YES"<<"\n";
        }else{
            cout<<str.size()<<"NO"<<"\n";
        }
    }
}