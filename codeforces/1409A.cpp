
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
int main(){
    IOS;
    test{
        ll a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"0"<<"\n";
        }else if(a>b){
            ll p=a-b;
            if(p<=10){
                cout<<"1"<<"\n";
            }else if(p>10){
                if(p%10==0){
                    cout<<p/10<<"\n";
                }else{
                    cout<<p/10+1<<"\n";
                }
            }
        }else if(b>a){
            ll q=b-a;
            if(q<=10){
                cout<<"1"<<"\n";
            }else if(q>10){
                if(q%10==0){
                    cout<<q/10<<"\n";
                }else{
                    cout<<q/10+1<<"\n";
                }
            }
        }
    }
re;
}

