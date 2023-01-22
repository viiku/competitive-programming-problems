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
#define pb push_back()
int main()
{
	IOS;
	test{
		int n;
		cin>>n;
		vector<int>v1(n),v2(n);
		REP(i,n){
			cin>>v1[i];
		}
        REP(i,n){
            cin>>v2[i];
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(auto x:v1){
            cout<<x<<" ";
        }
        cout<<"\n";
        for(auto y:v2){
            cout<<y<<" ";
        }
        cout<<"\n";
	}
	re;
}
