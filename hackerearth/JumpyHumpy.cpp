#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
stack<int>stk;
int main(){
    int n;cin>>n;
    ll x=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(stk.empty()){
            stk.push(a[i]);
            x=stk.top();
        }else if(!stk.empty() && stk.top()<=a[i]){
            x=x xor a[i];
        }
    }
}