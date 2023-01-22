
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
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back
#define pi 3.1415926535897932384626
#define eb emplace_back
#define vii  vector<int>
#define pii  pair<int,int>
#define mpii map<int,int>
#define umpii unordered_map<int,int>
#define vpi  vector<pair<int,int>>
#define pll pair<ll,ll>
#define vll vector<ll>
#define mpll map<ll,ll>
#define umpll unordered_map<ll,ll>
#define mp(x,y) make_pair(x,y)
const ll mod=(ll)1e9+7;
const ll maxi=(ll)1e18;
//char to integer (char-'0')
//Integer to char (char+'0')
ll sumA=0,sumB=0;
int swaps(vii v1,vii v1,int n,int m){
    if(sumA>sumB){
        return 0;
    }else{
        if(n<m){
            int k=n-m;
            while(k>0){
                
            }
        }
    }
}
int main(){
    IOS;
    test{
        int n,m;cin>>n>>m;
        vii v(n),v1(m);
        rep(i,0,n){
           cin>>v[i];
           sumA+=v[i];
        }
        rep(i,0,m){
            cin>>v1[i];
            sumB+=v1[i];
        }
        sort(v1.begin(),v1.end(),greater<int>());
    }
re;
}
