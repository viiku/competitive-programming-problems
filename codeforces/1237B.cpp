
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
int main(){
    IOS;
    ll n;
    cin>>n;
    ll a[n],b[n];
    vector<pair<ll,ll>>v1,v2;
    rep1(i,1,n){
       cin>>a[i];
       v1.eb(mp(a[i],i));
    }
/*        for(int i=0;i<v1.size();i++){
            cout<<v1[i].fi<<" "<<v1[i].se<<"\n";
        }*/
    rep1(i,1,n){
        cin>>b[i];
        v2.eb(mp(a[i],i));
    }
    for(int i=0;i<n;i++){
        if(v1[i].se<)
    }
re;
}
