
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
int main(){
    IOS;
    test{
        int n,k1,k2;
        cin>>n>>k1>>k2;
        int a[k1],b[k2];
        v vec1(k1),vec2(k2);
        REP(i,k1){
           cin>>a[i];
           vec1.emplace_back(a[i]);
        }
        REP(i,k2){
            cin>>b[i];
            vec2.emplace_back(b[i]);
        }
        int p=*max_element(vec1.begin(),vec1.end());
        int q=*max_element(vec2.begin(),vec2.end());
        if(p<q){
            cout<<"NO"<<"\n";
        }else if(p>q){
            
        }
    }
re;
}
