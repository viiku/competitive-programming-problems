
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,a,n) for(ll i=a;i<n;i++)
#define PER(i,n,a) for(ll i=n;i>a;i--)
#define REP1(i,a,n) for(ll i=a;i<=n;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define all(x) (x).begin(),(x).end()
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back
#define PI 3.1415926535897932384626
#define fi first
#define se second
#define eb emplace_back
#define vll vector<ll>
#define vi  vector<int>
#define mpll map<ll,ll>
#define pll pair<ll,ll>
#define mp(x,y) make_pair(x,y)
const ll MAXI = (ll)1e9+7;
ll  EvenDivisiors(ll i,ll p){
    ll q=0;
    if(i%2==0 && p%2==0){
        q=q+2;
    }else if(i%2==0 && p%2!=0){
        q++;
    }else if(i%2!=0 && p%2==0){
        q++;
    }
    return q;
}
int main(){
    IOS;
    test{
        ll n;
        cin>>n;
/*        int ar[n];
        REP(i,a,n){
           cin>>ar[i];
        }
        */
        ll count=0;
        if(n%2==0){
            count++;
            for(ll i=2;i*i<n;i+2){
            if((n%i)==0){
                ll p=(n/i);
                count+=EvenDivisiors(i,p);
                }
            }
            cout<<count<<"\n";
        }else if(n%2!=0){
            for(ll i=1;i*i<=n;i++){
            if((n%i)==0){
                ll p=(n/i);
                count+=EvenDivisiors(i,p);
            }
            cout<<count<<"\n";
        }
    }
    }
re;
}
