#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define PER(i,n) for(int i=n;i>0;i--)
#define ull unsigned long long int
#define ld long double
#define re return 0
int main()
{
	IOS;
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		ll p=min(a,b);
		ll q=min(p,(a+b)/3);
		cout<<q<<"\n";
	}
	re;
}
