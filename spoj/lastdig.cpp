#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll BinaryExpoMod(ll a,ll b,ll mod){ ll result=1; while(b>0) { if(b%2==1){ result=(result*a)%mod;} a=(a*a)%mod; b/=2;} return result; }
int main(){
    long long int t,a,b;cin>>t;while(t--){
        cin>>a>>b;
        cout<<BinaryExpoMod(a,b,10)<<"\n";
    }
    return 0;
}