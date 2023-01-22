#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll BinaryExpo(ll a,ll b) { ll result=1; while(b>0){ if(b%2==1){ result *=a; } a*=a;b/=2; } return result; }
void sum(ll n,ll m){
    ll sum=0,k=0;
    for(int i=1;i<=n;i++){
        k=BinaryExpo(i,i);
        sum=(sum%m+k%m)%m;
    }
    cout<<sum<<endl;
}
int main(){
    ll n,m;cin>>n>>m;
    sum(n,m);
}