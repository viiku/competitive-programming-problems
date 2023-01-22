
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
    test{
        ll x,y,k,n;
        cin>>x>>y>>k>>n;
        vector<pair<ll,ll>>v;
        while(n--){
            ll pi1,ci;
            cin>>pi1>>ci;
            v.eb(mp(pi1,ci));
        }
        int p=0,q=0;
        for(int i=0;i<v.size();i++){
            if(v[i].fi+y>=x && v[i].se<=k){
//                cout<<v[i].fi<<" "<<v[i].se<<"\n";
                p++;
            }
        }
        if(p!=0){
            cout<<"LuckyChef"<<"\n";
        }else{
            cout<<"UnluckyChef"<<"\n";
        }
    }
re;
}
