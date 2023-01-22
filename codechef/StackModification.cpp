
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
const ll MOD=(ll)1e9+7;
void PrintPair(pll p){
    cout<<p.fi<<" "<<p.se<<"\n";
}
int main(){
    IOS;
    ll n;
    cin>>n;
    ll ar[n];
    stack<pll>stk,stk1;
    REP1(i,1,n){
        cin>>ar[i];
    }
    ll mn=ar[1];
    ll mx=ar[1];
    REP1(i,1,n){
        mn=min(mn,ar[i]);
        mx=max(mx,ar[i]);
        stk.push(mp(mn,ar[i]));
        stk1.push(mp(mx,ar[i]));
    }
    while(!stk.empty()){
        PrintPair(stk.top());
        stk.pop();
    }
    while(!stk1.empty()){
        PrintPair(stk1.top());
        stk1.pop();
    }

//    There can be many more modification on stack
/*    cout<<"\n";
    PrintPair(stk.top());
    cout<<"\n";
    PrintPair(stk1.top());
    */
re;
}
