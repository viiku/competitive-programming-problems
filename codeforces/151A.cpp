#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,l,c,d,p,m,r,x,a,q;
	cin>>n>>k>>l>>c>>d>>p>>m>>r;
	p=(k*l)/m;
	x=c*d;
	a=p/r;
	int y=0;
	while(p && x && a)
	{
		p--;
		x--;
		a--;
		y++;
	}
	cout<<y/n;
	return 0;
}
