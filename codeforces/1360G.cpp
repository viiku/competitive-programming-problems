#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
	IOS;
	ll t;
	cin>>t;
	while(t--)
	{
		int n,m,a,b;
		cin>>n>>m>>a>>b;
		for(ll i=1;i<=n;i++)
		{
			for(ll j=1;j<=m;j++)
			{
				if(j<=a)
				{
					cout<<"1"<<" ";
				}
				else
				{
					cout<<"0"<<" ";
				}
				
			}
			cout<<"\n";
		}
		return 0;
	}
}
