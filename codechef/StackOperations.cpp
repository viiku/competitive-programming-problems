#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
stack<ll>stk;
int main(){
    ll n,k;cin>>n>>k;
    ll a[n],mx=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if((i+1)<=k){
            mx=max(mx,a[i]);
        }
    }
    if(k==1 && n==1){
        cout<<-1<<"\n";
    }else{
        cout<<mx<<"\n";
    }
    return 0;
}