
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
#define vii  vector<int>
#define vll vector<ll>
#define pii  pair<int,int>
#define pll pair<ll,ll>
#define vpi  vector<pair<int,int>>
#define mpll map<ll,ll>
#define mp(x,y) make_pair(x,y)
const ll mod=(ll)1e9+7;
const ll maxi=(ll)1e18;
ll CommonDivi(ll a[],ll n){
    ll mx=0;
    for(int i=0;i<n;i++){
        mx=max(mx,__gcd(mx,a[i]));
    }
    ll count=0,p=0;
    for(int i=0;i<n;i++){
        int j=1;
        while(j*j<=a[i] && j<=mx){
            if(a[i]%j!=0){
                p++;
            }
            j++;
        }
        if(p==0){
            count++;
        }
    }
    return count;
}
int main(){
    IOS;
  //  test{
        ll n,cnt=0;
        cin>>n;
        ll a[n];
        rep(i,0,n){
           cin>>a[i];
        }
        cout<<CommonDivi(a,n)<<"\n";
//    }
re;
}
