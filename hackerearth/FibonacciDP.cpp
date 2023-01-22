#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll fibo(ll n,vector<ll>&dp){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    dp[n]=fibo(n-1,dp)+fibo(n-1,dp);
    return dp[n];
}
ll fact(ll n,vector<ll>&dp1){
    if(n<=1) return 1;
    if(dp1[n]!=-1) return dp1[n];
    dp1[n]=n*fact(n-1,dp1);
    return dp1[n];
}
int main(){
    ll n;cin>>n;
    vector<ll>dp(n+1,-1);
    vector<ll>dp1(n+1,-1);
    ll ans=fibo(n,dp);
    ll ans1=fact(n,dp1);
    cout<<ans<<" "<<ans1;
}