
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
#define pb() push_back()
#define PI 3.1415926535897932384626
#define MOD (long long int)1000000007
#define F first
#define S second
#define eb() emplace_back()
#define vll vector<ll>
#define v  vector<int>
ll fact(int n){
    if(n==1 || n==0)
    return 1;
    return (n%MOD*fact(n-1)%MOD)%MOD;
}
/*
ll fact1(int y){
    if(y==1 || y==0)
    return 1;
    return y*fact1(y-1);
}*/
int main(){
    IOS;
    test{
        int n,y;
        cin>>n;//>>y;
        ll p=fact(n); ///fact1(y);
        cout<<p<<"\n";
    }
re;
}
