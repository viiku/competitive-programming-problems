/*28-02-2021*/
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
#define mpii map<int,int>
#define vll vector<ll>
#define mpll map<ll,ll>
#define vpi  vector<pii>
#define umpll unordered_map<ll,ll>
#define pqi  priority_queue<int>
#define umpii unordered_map<int,int>
#define pb push_back
#define eb emplace_back
const ll mod=(ll)1e9+7;
const ll maxi=(ll)1e18+123;
template<class T>
T min(T x,T y){
//Min function template
    return(((x)<(y))?(x):(y));
}
//Number(n) of Digits in base(b)=floor(logb(n))+1
//char to integer (char-'0')
//Integer to char (char+'0')
void read_cases(){
    int d,c,a1,a2,a3,b1,b2,b3;
    cin>>d>>c;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    int d1=a1+a2+a3;
    int d2=b1+b2+b3;
    if(d1>=150 && d2>=150){
        if((d1+d2+c)<(d1+d2+2*d)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }else if(d1>=150 && d2<150){
        int k=d1+c;
        if((k+d2+d)<(d1+d2+2*d)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }else if(d1<150 && d2>=150){
        int k=d2+c;
        if((d1+d+k)<(d1+d2+2*d)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }else if(d1<150 && d2<150){
        int k=d1+d2;
        if(k>=150){
            if((k+c)<(k+2*d)){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            cout<<"NO\n";
        }
    }
}
int main(){
    IOS;
    test{
       read_cases();
    }
}