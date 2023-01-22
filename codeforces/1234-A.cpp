#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int sum=0,r=0,k=1;
		int p=accumulate(a,a+n,sum);
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			if(a[i]*n==p || a[i]*n>p && k<=1)
			{
				k++;
				cout<<a[i]<<"\n";
			}
		}
	}
	return 0;
}
