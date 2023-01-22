
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
#define pqi  priority_queue<int>
#define umpii unordered_map<int,int>
#define mp(x,y) make_pair(x,y)
#define vii  vector<int>
#define pii  pair<int,int>
#define pll pair<ll,ll>
#define mpii map<int,int>
#define vll vector<ll>
#define mpll map<ll,ll>
#define vpi  vector<pair<int,int>>
#define umpll unordered_map<ll,ll>
#define pb push_back
#define eb emplace_back
const ll mod=(ll)1e9+7;
const ll maxi=(ll)1e18;
//char to integer (char-'0')
//Integer to char (char+'0')
int n,q,x;
void read(){
    cin>>n>>q;
    int a[n];
    rep(i,0,n){
        cin>>a[i];
    }
    while(q--){
        cin>>x;
        int i=0,j=n-1;
        ll sum=0,sum1=0;
        bool ok=true,ok1=true;
        while(a[j]!=x && a[i]!=x){
            if(a[i]!=x && ok){
                sum+=a[i];
                i++;
            }else if(a[i]==x){
                ok=false;
            }

            
            if(a[j]!=x && ok){
                sum1+=a[j];
                j--;
            }else if(a[j]==x){
                ok=false;
            }
        }
        cout<<min(sum,sum1)+x<<endl;
    }
}
int main(){
    IOS;
    test{
        read();
    }
}
