
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
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back
#define pi 3.1415926535897932384626
#define fi first
#define se second
#define eb emplace_back
#define vll vector<ll>
#define vi  vector<int>
#define mpll map<ll,ll>
#define pll pair<ll,ll>
#define mp(x,y) make_pair(x,y)
const ll mod=(ll)1e9+7;
void DigitProd(ll n){
    ll prod=1,p=0;
    if(n>=1 && n<=9){
        cout<<n<<"\n";
    }else if(n>=10 && n<=99){
        if(n%10==0){
            p=n-1;
            while(p!=0){
                prod=prod*(p%10);
                p=p/10;
            }
            cout<<prod<<"\n";
        }else{
            if(n%10<=5){
                p=n-((n%10)+1);
                while(p!=0){
                    prod=prod*(p%10);
                    p=p/10;
                }
                cout<<prod<<"\n";
            }else{
                while(n!=0){
                    prod=prod*(n%10);
                    n=n/10;
                }
                cout<<prod<<"\n";
            }
        }
    }else{
        int q=0,s=0;
    }
}
int main(){   
    IOS;
    ll n;
    cin>>n;
    DigitProd(n);
re;
}
