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
#define eb() emplace_back()
#define vll vector<ll>
#define v  vector<int>
int main()
{
	IOS;
//	test{
		ll x;
        float y;
		cin>>x>>y;
		if(x%5==0 && x<=y){
            float z=y-(x+0.5);
            if(z>=0){
                cout<<prec(2)<<z<<"\n";
            }else{
                cout<<y<<"\n";
            }
        }else{
            cout<<prec(2)<<y<<"\n";
        }
//	}
	re;
}
