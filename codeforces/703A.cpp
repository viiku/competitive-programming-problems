#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,p=0,q=0;
	cin>>t;
	while(t--)
	{
		int m,c;
		cin>>m>>c;
		if(m>c)
		{
			p++;
		}
		else if(c>m)
		{
			q++;
		}
		else if(c==m)
		{
			p=p+0;
			q=q+0;
		}
	}
	if(p>q)
	{
		cout<<"Mishka"<<"\n";
	}
	else if(q>p)
	{
		cout<<"Chris"<<"\n";
	}
	else if(p==q)
	{
		cout<<"Friendship is magic!^^";
	}
	return 0;
}
