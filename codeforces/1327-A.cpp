#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,m;
		cin>>n>>k;
		if((k*k)<=n && (n+k)%2==0)
		{
			int val=1;
			int sum=0;
			for(int i=1;i<k;i++)
			{
			//	cout<<val<<" ";
				sum+=val;
			}
			m=(n-sum);
			cout<<"YES"<<"\n";
		}
		else 
		{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}
