
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
const ll MOD=(ll)1e9+7;
vll primes;
void Sieve(ll n){
    bitset<10000010>bs; bs.set();bs[0]=bs[1]=0;
    for(ll i=2;i<=n;i++){
        if(bs[i]==true){
            for(ll j=i*i;j<=n;j+=i){
                bs[j]=false;
            }
            primes.push_back(i);
        }
    }
}
/*    for(int i=0;i<primes.size();i++){
        cout<<primes[i]<<" ";
    }
}
/*
bool isPrime(ll n){
    for(int i=0;i<primes.size();i++)
        if(n%primes[i]==0) return false;
    return true;
}*//*
bool isPrime(ll n,ll k){
    for(int i=0;primes[i]*primes[i]<k;i++)
        if(k%primes[i]==0) return false;
    return true;
}*/
// Number of Prime factors of a number
ll PrimeFactors(ll n){
    int p=0;
    for(int i=2;primes[i]*primes[i]<=n;i++){
        if(n%primes[i]==0){
            p++;
        }
    }
    return p;
}
int main(){
    IOS;
    ll n;
    cin>>n;
    vll primes;
    Sieve(n);
//    cout<<"\n";
//    cout<<isPrime(n,k)<<"\n";
    cout<<PrimeFactors(n)<<"\n";
re;
}
