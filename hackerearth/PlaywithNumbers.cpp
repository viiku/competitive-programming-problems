#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll n,q,l,r;cin>>n>>q;
    ll a[n],b[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    b[1]=a[1];
    for(int i=2;i<=n;i++){
        b[i]=a[i]+b[i-1];
    }
    while(q--){
        cin>>l>>r;
            cout<<(b[r]-b[l-1])/(r-l+1)<<"\n";
    }
}