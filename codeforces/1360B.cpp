#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,mn;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		mn=abs(a[0]-a[1]);
		if(n>2)
		{
			for(int i=0;i<n-1;i++)
			{
				if(abs(a[i]-a[i+1])<=mn)
				{
					mn=abs(a[i]-a[i+1]);
				}
			}
			cout<<mn<<"\n";
		}
		else if(n==2)
		{
			cout<<abs(a[0]-a[1])<<"\n";
		}
	}
	return 0;
}
