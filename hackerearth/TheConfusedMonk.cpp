#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
const ll mod=(ll)1e9+7;
ll BinaryExpoMod(ll a,ll b,ll mod){ ll result=1; while(b>0) { if(b%2==1){ result=(result*a)%mod;} a=(a*a)%mod; b/=2;} return result; }
int main(){
    int n;cin>>n;
    int a[n];
    ll mx=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=(mx%mod*a[i]%mod)%mod;
    }
    int gcd=a[0];
    for(int i=1;i<n;i++){
        gcd=__gcd(gcd,a[i]);
    }
    ll k=BinaryExpoMod(mx,gcd,mod);
    cout<<k<<endl;
}