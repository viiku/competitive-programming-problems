#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		k=abs(a[0]-a[1]);
		for(ll i=0;i<n;i++)
		{
			for(ll j=1;j<n-1;j++)
			{
				if(abs(a[i]-a[j])<=k)
				{
					swap(a[j],a[j+1]);
					k=abs(a[i]-a[j]);
				}
			}
		}
		for(ll i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		return 0;
	}
}
