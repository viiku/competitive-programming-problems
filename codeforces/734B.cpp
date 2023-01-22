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
	ll k2,k3,k5,k6;
	cin>>k2>>k3>>k5>>k6;
	ll p=min({k2,k5,k6});
	ll q=min(k3,k2-p);
	cout<<p*(256)+q*32<<"\n";
	re;
}
