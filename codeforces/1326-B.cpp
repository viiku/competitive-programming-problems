#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	cin>>n;
	int b[n],x[n],a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>b[i];
	}
	x[1]=0;
    a[1]=b[1]+x[1];
	for(ll i=2;i<=n-1;i++)
	{
		if(i==2){	
		x[i]=max(0,a[i-1]);
		a[i]=b[i]+x[i];
	}
	else if(i>2)
	{
		x[i]=max(a[i-2],a[i-1]);
		a[i]=b[i]+x[i];    
	}
	}
	for(ll i=1;i<=n;i++)
	{
	cout<<a[i]<<" ";
}
	return 0;
}
