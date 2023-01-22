#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		if(a==b)
		{
			a=2*a;
			cout<<pow(a,2)<<"\n";
		}
		else if(a>b)
		{
			if(pow(b,2)>a)
			{
				b=2*b;
				cout<<pow(b,2)<<"\n";
			}
			else
			{
				cout<<pow(a,2)<<"\n";
			}
		}
		else if(b>a)
		{
			if(pow(a,2)>b)
			{
				a=2*a;
				cout<<pow(a,2)<<"\n";
			}
			else
			{
				cout<<pow(b,2)<<"\n";
			}
		}
	}
	return 0;
}
