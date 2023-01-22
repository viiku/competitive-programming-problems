#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
const ll mod=1e9+7;
ll BinaryExpoMod(ll a,ll b,ll mod){ ll result=1; while(b>0) { if(b%2==1){ result=(result*a)%mod;} a=(a*a)%mod; b/=2;} return result; }
int main(){
    ll a,b;cin>>a>>b;
    ll k=BinaryExpoMod(a,b,mod);
    cout<<k<<endl;
}