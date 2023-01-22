#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int  main(){
    ll t;cin>>t;while(t--){
        ll n,q;cin>>n;
        ll a[n],sum1=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum1+=a[i];
        }
//        ll sum=0; 
        cin>>q;while(q--){
            ll s,e,w;cin>>s>>e>>w;
            sum1+=((e-s)+1)*w;
        }
        cout<<sum1<<"\n";
    }
    return 0;
}