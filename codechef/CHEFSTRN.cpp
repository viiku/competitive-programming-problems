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
    if(stk.empty()){
        cout<<"Empty String\n";
    }else{
        vector<char>v;
        while(!stk.empty()){
            v.emplace_back(stk.top());
            stk.pop();
        }
        for(auto it=v.rbegin();it!=v.rend();it++){
            cout<<*it;
        }
    }
}