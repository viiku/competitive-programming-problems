
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
#define F first
#define S second
#define eb() emplace_back()
#define vll vector<ll>
#define v  vector<int>
int main(){
    IOS;
    test{
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
/*        int a[n];
        REP(i,n){
           cin>>a[i];
        }
        */
        v vec(4);
        vec[0]=a;vec[1]=b;vec[2]=c;vec[3]=d;
        sort(vec.begin(),vec.end());
/*        for(auto x:vec){
            cout<<x<<" ";
        }
        */
        if((vec[0]==vec[1])&&(vec[2]==vec[3])){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
re;
}
