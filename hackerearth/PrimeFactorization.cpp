
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
vector<int>primes;
bitset<10000010>bs;
void sieve(ll n){    
    bs.set();
    primes.size();
    ll k=0;
    bs[0]=bs[1]=false;
    for(int i=2;i<=n;i++){
        if(bs[i]==true){
            for (int j=i*i;j<=n;j+=i){
                bs[j]=false;
            }
            primes.eb(i);
            if(n%primes[i]==0){
                k++;
            }
        }
    }
}
int main(){
    ll n;
    cin>>n;
    sieve(n);
//    PrimeFactors(n);
}