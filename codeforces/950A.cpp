
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
int main(){
    IOS;
    int l,r,a;
    cin>>l>>r>>a;
    int p=l,q=r;
    if(l>r){
        l=l-r;
        if(a>l){
            a=a-l;
            if(a%2==0){
                cout<<2*(p+(a/2))<<"\n";
            }else{
                cout<<2*(p+(a-1)/2)<<"\n";
            }
        }else if(l>=a){
            cout<<2*(r+a)<<"\n";
        }
    }else if(l<r){
        r=r-l;
        if(a>r){
            a-=r;
            if(a%2==0){
                cout<<2*(q+(a/2))<<"\n";
            }else{
                cout<<2*(q+(a-1)/2)<<"\n";
            }
        }else{
            cout<<2*(l+a)<<"\n";
        }
    }else if(l==r){
        if(a%2==0){
            cout<<2*(l+(a/2))<<"\n";
        }else{
            cout<<2*(l+(a-1)/2)<<"\n";
        }
    }
re;
}
