#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define PER(i,n) for(int i=n;i>0;i--)
#define REP1(i,n) for(int i=0;i<n-1;i++)
#define ull unsigned long long int
#define ld long double
#define re return 0
int main()
{
	IOS;
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b,k;
		cin>>a>>b>>k;
		if(k%2==0)
		{
			cout<<(a-b)*(k/2)<<"\n";
		}
		else
		{
			cout<<a*((k+1)/2)-b*((k-1)/2);
		}
	}
	re;
}
