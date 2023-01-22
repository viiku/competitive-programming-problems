#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
// ll BinaryExpoMod(ll a,ll b,ll mod){ ll result=1; while(b>0) { if(b%2==1){ result=(result*a)%mod;} a=(a*a)%mod; b/=2;} return result; }
ll Modpow(ll a,ll b,ll mod){
    ll result=1;
    while(b>0){
        if(b%2==1){
            result=(result*a)%mod;
        }
        a=(a*a)%mod;
        b/=2;
    }
    return result;
}
int main(){
    ll x,n,mod;cin>>x>>n>>mod;
    cout<<Modpow(x,n,mod)<<endl;
}