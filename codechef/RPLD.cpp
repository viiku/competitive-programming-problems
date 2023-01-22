
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
#define ld long double
#define prec(n) fixed<<setprecision(n)
//#define test ll k; cin>>k; for(int i=1;i<=k;i++)
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
#define mpii map<int,int>
#define mp(x,y) make_pair(x,y)
const ll mod=(ll)1e9+7;
const ll maxi=(ll)1e18;
int main(){
    IOS;
    int t;cin>>t;
    for(int k=1;k<=t;k++){
        map<pair<int,int>,int>mp;
        vpi v;
        int p=0;
        int n,r,i,c;cin>>n>>r;while(r--){
            cin>>i>>c;
            mp[{i,c}]++;
            if(mp[{i,c}]>1){
                p++;
            }
        }
        if(p!=0){
            cout<<"Scenario #"<<k<<": "<<"impossible"<<"\n";
        }else{
            cout<<"Scenario #"<<k<<": "<<"possible"<<"\n";
        }
    } // TODO
re;
}
