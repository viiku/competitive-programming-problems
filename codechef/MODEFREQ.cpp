
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
void FindingFrequency(vii v,map<int,int>mp1){
    int mx=0;
    int mn=20;
    rep(i,0,v.size()){
        mp1[v[i]]++;
    }
    forit(it,mp1){
        if(it->se>mx){
            mx=it->se;
        }else if(it->se==mx){
            mn=min(it->fi,mn);
        }
    }
    if(mx!=0){
        cout<<mx<<"\n";
    }else{
        cout<<mn<<"\n";
    }
}
int main(){
    IOS;
    test{
        int n;
        cin>>n;
        int a[n];
        map<int,int>mp,mp1; 
        rep(i,0,n){
           cin>>a[i];
           mp[a[i]]++;
        }
        vii v;
        int mx=0,p=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            v.eb(it->se);
        }
        FindingFrequency(v,mp1);
    }
re;
}
