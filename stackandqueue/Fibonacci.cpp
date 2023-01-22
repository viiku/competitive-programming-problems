#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
const ll mod=(ll)1e9+7;
map<ll,ll>mp;
ll fibo(ll n){ // Nth fibonacci number
  if(mp.count(n))  return mp[n];
  ll k=n/2;
  if(n%2==0){
    return mp[n]=(fibo(k)*fibo(k)+fibo(k-1)*fibo(k-1))%mod;
  }
  return mp[n]=(fibo(k)*fibo(k+1)+fibo(k-1)*fibo(k))%mod;
}
int main(){
  ll N;
  mp[0]=mp[1]=1;
  cin>>N;
  fibo(N);
  cout<<(N==0 ? 0 : fibo(N-1))<<endl; 
  return 0;
}
