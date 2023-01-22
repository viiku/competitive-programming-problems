#include<bits/stdc++.h>
using namespace std;
using ld=long double;
using ll=long long int;
ll modpow(ll a,ll b,ll mod){ ll result=1; while(b>0) { if(b%2==1){ result=(result*a)%mod;} a=(a*a)%mod; b/=2;} return result; }
int main(){
    int n;cin>>n;
    ll k=modpow(5,n,100);
    cout<<k<<"\n";
    return 0;
}