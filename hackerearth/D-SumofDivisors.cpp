
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,a,n) for(ll i=a;i<n;i++)
#define PER(i,n,a) for(ll i=n;i>a;i--)
#define REP1(i,a,n) for(ll i=a;i<=n;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back
#define PI 3.1415926535897932384626
#define MOD (ll)1000000007
#define fi first
#define se second
#define eb emplace_back
#define vll vector<ll>
#define vi  vector<int>
#define mpll map<ll,ll>
#define pll pair<ll,ll>
#define mp(x,y) make_pair(x,y)
const ll MAXI = (ll)1e9+7;
ll isPrimes(){
    vll primes[n+1];
    bitset<10000010>bs;
    bs.set(true);
    bs[0]=0;bs[1]=0;
    for(int i=2;i*i<=sqrt(n);i++){
        if(bs[i]=true){
            for(int j=i*i;j<=n;j+=i){
                bs[j]=false;
                primes.pb(i);
            }
        }
    }
    forit(it,primes){
        cout<<*it<<" ";
    }
}
ll NOofDivisiors(){
    for(ll i=1;i*i<=n;i++){
        if(i/)
    }
}
int main(){
    IOS;
/*    test{
        int n;
        cin>>n;
        int ar[n];
        REP(i,a,n){
           cin>>ar[i];
        }
    }
    */
    ll n;
    cin>>n;
    REP1(i,1,n){
        sum+=
    }
re;
}
