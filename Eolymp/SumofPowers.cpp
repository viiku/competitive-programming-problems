#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll BinaryExpo(ll a,ll b) { ll result=1; while(b>0){ if(b%2==1){ result *=a; } a*=a;b/=2; } return result; }
ll sumofpowers(ll n,ll m){
    ll result=1;
    for(int i=1;i<=n;i++){
        ll k=BinaryExpo(i+1,n);
        result+=(i*k)%m;
    }
    return result;
}
int main(){
    ll n,m;cin>>n>>m;
    cout<<sumofpowers(n,m)%m<<endl;
}