
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define REPJ(j,n) for(int j=0;j<n;j++)
#define PER(i,n) for(int i=n;i>0;i--)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define REPJ1(j,n) for(int j=1;j<=n;j++)
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb(n) push_back(n)
#define PI 3.1415926535897932384626
#define MOD (long long int)1000000007
#define F first
#define S second
#define eb(n) emplace_back(n)
#define vll vector<ll>
#define v  vector<int>
int count_primes(ll n){
    const ll s=10000;
    vector<ll>primes;
    int nsqrt=sqrt(n);
    //finding sieve
    vector<char>is_prime(nsqrt+1,true);
    for(ll i=2;i<=nsqrt;i++){
        if(is_prime[i]){
            primes.emplace_back(i);
            for(ll j=i*i;j<=nsqrt;j+=i){
                is_prime[j]=false;
            }
        }
    }

    ll result=0;
    vector<char>block(s);
    for(ll k=0;k*s<=n;k++){
        fill(block.begin(),block.end(),true);
        int start=k*s;
        for( ll p:primes){
            int start_idx = (start + p - 1) / p;
            int j = max(start_idx,p)*p - start;
            for (; j < s; j += p)
                block[j] = false;
        }
        if (k == 0)
            block[0] = block[1] = false;
        for (int i = 0; i < s && start + i <= n; i++) {
            if (block[i])
                result++;
        }
    }
    return result;
}
int main(){
    IOS;
//    test{
        int n;
        cin>>n;
/*        int a[n];
        REP(i,n){
           cin>>a[i];
        }
        */
        cout<<count_primes(n)<<" ";
//    }
re;
}
