
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
    string str,str1;
    getline(cin,str);
    getline(cin,str1);
    const int p=31;
    ll hash_value=0,hash_value1=0;
    ll p_pow=1,t_pow=1;
    for(char c:str){
        hash_value=(hash_value+(c-'a'+1)*p_pow)%MOD;
        p_pow=(p_pow*p)%MOD;
    }
    cout<<hash_value<<"\n";
    for(char c:str1){
        hash_value1=(hash_value1+(c-'a'+1)*t_pow)%MOD;
        t_pow=(t_pow*p)%MOD;
    }
    cout<<hash_value1<<"\n";
re;
}
