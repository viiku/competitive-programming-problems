#include<bits/stdc++.h>
using namespace std;
using ll= long long int;
int main(){
    ll n,mx=0;cin>>n;
    ll a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mx=max(a[i],mx);
    }  
    
    return 0;
}