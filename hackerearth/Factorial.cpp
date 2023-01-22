#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
const ll mod=(ll)1e9+7;
ll dp[100005];
void factorial(){
  dp[0]=1;
  dp[1]=1;
  for(int i=2;i<=100000;i++){
    dp[i]=(dp[i-1]%mod*i%mod)%mod;
  }
}
int main(){
  factorial();
  int test;
  cin>>test;
  while(test--){
    ll n;cin>>n;
    cout<<dp[n]<<"\n";
  }
}
