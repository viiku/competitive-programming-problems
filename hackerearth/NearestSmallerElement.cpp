#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=1;i<=n;i++) cin>>a[i];
    stack<int>stk;
    for(int i=1;i<=n;i++){
        while(!stk.empty() && stk.top()>=a[i]){
            stk.pop();
        }
        if(stk.empty()){
            cout<<0<<" ";
        }else{
            cout<<stk.top()<<" ";
        }
        stk.push(i);
    }
}