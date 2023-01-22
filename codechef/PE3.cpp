
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define per(i,n,a) for(ll i=n;i>a;i--)
#define rep1(i,a,n) for(ll i=a;i<=n;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define all(x) (x).begin(),(x).end()
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back
#define pi 3.1415926535897932384626
#define fi first
#define se second
#define eb emplace_back
#define vll vector<ll>
#define vi  vector<int>
#define mpll map<ll,ll>
#define pll pair<ll,ll>
#define mp(x,y) make_pair(x,y)
const ll mod=(ll)1e9+7;e15
// THIS SOLUTION CAN GO UP TO 10E15
ll LongestPrimeFactor(ll n){
    ll maxPrime=-1;
    while(n%2==0){
        maxPrime=2;
        n>>=1; //Equivalent to n/=2
    }
    for(ll i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
            maxPrime=i;
            n=n/i;
        }
    }
    if(n>2)
        maxPrime=n;
    return maxPrime;
}
int main(){
    IOS;
    ll n;
    cin>>n;
    cout<<LongestPrimeFactor(n)<<"\n";
re;
}
