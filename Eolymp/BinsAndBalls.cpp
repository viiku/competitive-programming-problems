#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
const ll mod=1e9+7;
 ll BinaryExpo(ll a,ll b) { ll result=1; while(b>0){ if(b%2==1){ result *=a; } a*=a;b/=2; } return result; }
ll validconf(ll n){
    int cube=BinaryExpo(n,3);
    int square=BinaryExpo(n,2);
    return cube-2*square+n;
}
int main(){
    ll n;cin>>n;
    cout<<validconf(n);
}