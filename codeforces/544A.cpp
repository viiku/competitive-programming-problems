
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
//    test{
        int k;
        cin>>k;
        string str;
        cin>>str;
        vector<char>vec;
        if(k==1){
            cout<<"YES"<<"\n"<<str<<"\n";
        }else if(k>=2 && k<=str.size()){
            for(int i=0;i<str.size()-1 && k!=0;i++){
                if(str[i]!=str[i+1]){
                    
                    k--;
                }else{
                    vec.eb(str[i]);
                }
            }
        }else if(k>str.size()){
            cout<<"NO"<<"\n";
        }
//    }
re;
}
