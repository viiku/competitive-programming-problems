#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll modpow(ll a,ll b,ll mod){ ll result=1; while(b>0) { if(b%2==1){ result=(result*a)%mod;} a=(a*a)%mod; b/=2;} return result; }
int main(){
    int n;cin>>n;
    int a=1378;
    cout<<modpow(a,n,10);
    return 0;
}