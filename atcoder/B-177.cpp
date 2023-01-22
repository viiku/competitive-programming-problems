
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
ll findProductSum(ll ar[], ll n,ll sum){
    ll sum1=0,sum_sq=0;
    sum_sq=sum*sum;
    if(n>2){
        for(ll i=0;i<n;i++){
            ll q=ar[i]*ar[i];
            sum1=sum1+q;
        }
    }
    return (sum_sq-sum1)/2;
} 
int main(){
    IOS;
//    test{
        ll n,sum=0;
        cin>>n;
        ll ar[n];
        REP(i,0,n){
           cin>>ar[i];
           sum+=ar[i];
        }
        if(n==2){
            cout<<ar[0]*ar[1]<<"\n";
        }else if(n>2){
            ll p=findProductSum(ar,n,sum);
            cout<<p%MAXI<<"\n";
        }
//    }
re;
}
