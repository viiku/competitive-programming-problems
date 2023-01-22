
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define ld long double
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define per(i,n,a) for(ll i=n-1;i>=a;i--)
#define rep1(i,a,n) for(ll i=a;i<=n;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define all(x) (x).begin(),(x).end()
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define pi 3.1415926535897932384626433832795
#define mp(x,y) make_pair(x,y)
#define vii  vector<int>
#define pii  pair<int,int>
#define pll pair<ll,ll>
#define mpii map<int,bool>
#define vll vector<ll>
#define mpll map<ll,ll>
#define vpi  vector<pii>
#define umpll unordered_map<ll,ll>
#define pqi  priority_queue<int>
#define umpii unordered_map<int,int>
#define pb push_back
#define eb emplace_back
const ll mod=(ll)1e9+7;
const ll maxi=(ll)1e18;
// template<class T>
// T max(T x,T y){
//Min function template
    // return(x<y)?x:y;
// }
//Number(n) of Digits in base(b)=floor(logb(n))+1
//char to integer (char-'0')
//Integer to char (char+'0')
int n;
void read(){
    cin>>n;
    int a[n],b[n];
    // bool ok=true,ok1=true;
    // mpii mp;
    rep(i,0,n){
        cin>>a[i];
        // mp[a[i]]=true;
    }
    rep(i,0,n){
        cin>>b[i];
    }
    // int mn=1e6;
    // rep(i,0,n){
    //     rep(j,0,n){
    //         int k=abs(a[i]-b[j]);
    //         mn=min(mn,k);
    //     }
    // }
    // cout<<mn<<endl;
    int l=0,r=n-1,mn=mod,d=mod,mid=0;
    rep(i,0,n){
        while(l<=r){
            mid=(l+r)/2;
            d=min(abs(a[mid]-b[i]),d);
            if(a[mid]>=b[i]){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        mn=min(mn,d);
    }
    cout<<mn<<endl;
}
int main(){
    IOS;
    test{
       read();
    }
}
