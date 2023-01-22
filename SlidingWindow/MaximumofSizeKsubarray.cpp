#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n],mx=0;
    stack<pair<int,int>>stk;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
        stk.push(make_pair(mx,i+1));
    }
    while(!stk.empty()){
        cout<<stk.top().first<<" "<<stk.top().second<<endl;
        stk.pop();
    }
}