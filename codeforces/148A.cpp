
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
ll countRestD(ll k,ll l,ll m,ll n,ll d){
    vll vec(d+1);
    for(ll i=1;i<=d;i++){
        vec[i]=i;
    }
    int p=1;
    if(p==1){
        for(ll i=k;i<=d;i+=k){
            vec[i]=0;
        }
        p++;
        if(p==2){
            for(ll i=l;i<=d;i+=l){
                vec[i]=0;
            }  
        }
        p++;
        if(p==3){
            for(ll i=m;i<=d;i+=m){
                vec[i]=0;
            }
            p++;
            if(p==4){
                for(ll i=n;i<=d;i+=n){
                    vec[i]=0;
                }
            }
        }
    }
    ll q=0;
    for(ll i=1;i<=d;i++){
        if(vec[i]!=0){
            q++;
        }
    }
    return (d-q);
}
int main(){
    IOS;
        ll k,l,m,n,d;
        cin>>k>>l>>m>>n>>d;
        cout<<countRestD(k,l,m,n,d)<<"\n";
re;
}
