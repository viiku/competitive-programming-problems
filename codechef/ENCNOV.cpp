
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
    test{
        int n,l,r;cin>>n>>l>>r;
        vii v1,v2;
        int cnt=1,cnt1=1;
        for(int i=1;i<=n;i++){
            if(cnt<=(l-1)){
                v1.emplace_back(pow(2,i));
            }else{
                v1.emplace_back(1);
            }
            cnt++;
        }
        int p=0;
        for(int i=1;i<=n;i++){
            if(cnt1<=(r-1)){
                v2.emplace_back(pow(2,i-1));
                p=i; 
            }else{
                v2.emplace_back(pow(2,p));
            }
            cnt1++;
        }
        cout<<accumulate(v1.begin(),v1.end(),0)<<" "<<accumulate(v2.begin(),v2.end(),0)<<"\n";
    }
re;
}
