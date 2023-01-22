
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,a,n) for(ll i=a;i<n;i++)
#define PER(i,n,a) for(ll i=n;i>a;i--)
#define REP1(i,a,n) for(ll i=a;i<=n;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define all(x) (x).begin(),(x).end()
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back
#define PI 3.1415926535897932384626
#define fi first
#define se second
#define eb emplace_back
#define vll vector<ll>
#define vi  vector<int>
#define mpll map<ll,ll>
#define pll pair<ll,ll>
#define mp(x,y) make_pair(x,y)
const ll MAXI = (ll)1e9+7;
bitset<10000010>bs;
vll primes;
ll sieve_size;
void sieve(ll upperbound){
    sieve_size=upperbound;
    bs.set();
    bs[0]=bs[1]=0;
    for(ll i=2;i<=sieve_size;i++){
        if(bs[i]==true){
            for(ll j=i*i;j<=sieve_size;j+=i){
                bs[j]=0;
            }
            primes.eb(i);
        }
    }
    forit(it,primes){
        cout<<*it<<" ";
    } 
}
/*
bool is_Prime(ll k){
    if(k<=sieve_size) return bs[k];
    for(int i=0;i<(ll)primes.size();i++){
        if(k%primes[i]==0) return false;
    }
    return true;
}
*/
/*
ll is_PrimeFactors(ll k){
    int p=0;
    for(ll i=2;i*i<=k && primes[i-1]*primes[i-1]<=k;i++){
//        if(primes[i-1]*primes[i-1]<=k){
            if(k%primes[i-1]==0){
                p++;
            }
        }
    return p;
}
*/
int main(){
    IOS;
    ll n,p;
    cin>>n>>p;
    sieve(n);
//    cout<<"\n"<<is_Prime(p);
//    cout<<is_PrimeFactors(p)<<"\n";
re;
}
