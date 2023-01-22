#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
const ll mod=(ll)1e9+7;
unordered_map<ll,ll>mp;
ll NthFibonacci(ll a,ll b,ll n){
  if(mp.find(n)!=mp.end()){
    return mp[n];
  }
  if(n==0){
    return a;
  }else if(n==1){
    return b;
  }
  ll first=NthFibonacci(a,b,n-1);
  ll second=NthFibonacci(a,b,n-2);
  mp[n]=(first%mod+second%mod)%mod;
  return mp[n];
}
int main(){
  int t;cin>>t;while(t--){
     ll a,b,n;
     cin>>a>>b>>n;
     cout<<NthFibonacci(a,b,n)<<"\n";
     mp.clear();
  }
}

