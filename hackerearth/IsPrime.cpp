
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
const ll mod=(ll)1e9+7;
const ll maxi=(ll)1e18;
ll BinaryExpo(ll a,ll b) { ll result=1; while(b>0){ if(b%2==1){ result *=a; } a*=a;b/=2; } return result; }
ll modpow(ll a,ll b,ll mod){ ll result=1; while(b>0) { if(b%2==1){ result=(result*a)%mod;} a=(a*a)%mod; b/=2;} return result; }
ll inline sub(ll a, ll b) { return (a%mod-b%mod+mod)%mod; }
ll inline divide(ll a, ll b) { return (a%mod * modpow(b%mod, mod-2, mod))%mod; }
bool inline isPrime(ll n){ if(n<=1) return false; if(n==2) return true; if(n%2==0) return false; for(int i=3;i*i<=n;i+=2) if(n%i==0){return false;} return true;}
// log(b)  //sqrt(n)
void solve(){}
int main(){
    IOS;
    test{
        int n;
        cin>>n;
        cout<<isPrime(n);
    }
re;
}
