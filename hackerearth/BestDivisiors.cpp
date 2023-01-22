
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
ll SumofDigits(ll p,ll q){
    string str1,str2;
    str1=to_string(p);
    ll sum1=0,sum2=0
    for(int i=0;i<str1.size();i++){
        sum1+=str1[i];
    }
    to_integer(sum1);
    str2=to_string(q);
    for(int i=0;i<str.size();i++){
        sum2+=str2[i];
    }
    to_integer(sum2);
    if(sum1>sum2)
        return sum;
    else if(sum1<sum2)
        return sum2;
    else
        return min(p,q);
}
int main(){
    IOS;
//    test{
        ll n;
        cin>>n;
        if(n==0){
            cout<<"0"<<"\n";
        }else if(n==1){
            cout<<1<<"\n";
        }else if(n==2){
            cout<<1<<"\n";
        }else if(n==3){
            cout<<1<<"\n";
        }else{
            for(ll i=1;i<=sqrt(n);i++){
                if(n%i==0){
                    ll p=i,q=(n/i);
                    
                }
            }
        }
re;
}
