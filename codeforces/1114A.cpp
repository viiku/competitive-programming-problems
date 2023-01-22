#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define PER(i,n) for(int i=n;i>0;i--)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define re return 0
int main()
{
	IOS;
	ll x,y,z;
	cin>>x>>y>>z;
	ll g,p,b;
	cin>>g>>p>>b;
	if(g>=x){
		g=g-x;
		int q=(g+p);
		if(q>=y){
			q=q-y;
			int r=(q+b);
			if(r>=z){
				cout<<"YES"<<"\n";
			}else{
				cout<<"NO"<<"\n";
			}
		}else{
			cout<<"NO"<<"\n";
		}
	}else{
		cout<<"NO"<<"\n";
	}
	re;
}
