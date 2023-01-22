
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define REPJ(j,n) for(int j=0;j<n;j++)
#define PER(i,n) for(int i=n;i>0;i--)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define REPJ1(j,n) for(int j=1;j<=n;j++)
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb(n) push_back(n)
#define PI 3.1415926535897932384626
#define MOD (long long int)1000000007
#define F first
#define S second
#define eb(n) emplace_back(n)
#define vll vector<ll>
#define v  vector<int>
int main(){
    IOS;
    test{
        int n;
        cin>>n;
/*        int a[n];
        REP(i,n){
           cin>>a[i];
        }
        */
        string str;
        cin>>str;
        int p=31;
        ll n=str.size();
        vll p_pow[n];
        p_pow[0]=1;
        for(int i=1;i<n;i++){
            p_pow[i]=(p_pow[i-1]*p)%MOD;
        }
        vll hash(n+1,0);
        for(int i=0;i<n;i++){
            hash[i+1]=(hash[i]+(s[i]-'a'+1)*p_pow[i])%MOD;
        }
    }
re;
}
