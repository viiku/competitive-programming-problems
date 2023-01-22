#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,j=0;
    stack<int>stk;
    stk.push(a[0]);
    for(int i=1;i<n;i++){
        if(stk.empty()){
            stk.push(a[i]);
        }
        while(!stk.empty() && stk.top()<a[i]){
            cout<<stk.top()<<" ";
            stk.pop();
        }
        stk.push(a[i]);
    }
}