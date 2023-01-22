
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,a,n) for(ll i=a;i<n;i++)
#define PER(i,n,a) for(ll i=n;i>a;i--)
#define REP1(i,a,n) for(ll i=a;i<=n;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back
#define PI 3.1415926535897932384626
#define MOD (ll)1000000007
#define fi first
#define se second
#define eb emplace_back
#define vll vector<ll>
#define vi  vector<int>
#define mpll map<ll,ll>
#define pll pair<ll,ll>
#define mp(x,y) make_pair(x,y)
const ll MAXI = (ll)1e9+7;
int main(){
    IOS;
//    test{
        ll n,k;
        cin>>n>>k;
/*        int ar[n];
        REP(i,a,n){
           cin>>ar[i];
        }
        */
        string str;
        cin>>str;
        map<char,ll>map1;
        for(int i=0;i<str.size();i++){
            if(map1.find(str[i])==map1.end()){
                map1.insert(mp(str[i],1));
            }else{
                map1[str[i]]++;
            }
        }
        ll mx=0,sum=0;
        vll v(map1.size());
        forit(it,map1){
            cout<<it->fi<<" "<<it->se<<"\n";
            v.eb(it->se);
//            cout<<mx<<" ";
        }
        cout<<"\n";
        for(auto x:v){
            cout<<x<<" ";
        }
/*        if(mx>=k){
            cout<<k*k<<"\n";
        }else if(mx<k){
            for(int i=0;i<v.size();i++){
                if(k!=0){
                    if(k>=v[i]){
                        sum+=v[i]*v[i];
                        k-=v[i];
                    }else{
                        sum+=k*k;
                    }
                }
            }
            cout<<sum<<"\n";
        }
        */
//    }
re;
}
