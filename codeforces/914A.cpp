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
	ll n,r=0;
	cin>>n;
	ll a[n],b[n];
	REP(i,n)
	{
		cin>>a[i];
	}
	ll mx=0;
	REP(i,n)
	{ 
	if(a[i]>0)
	{
		long double q=sqrt(a[i]);
		ll p=sqrt(a[i]);
		if((q-p)!=0)
		{
		//	cout<<a[i]<<" ";
		    mx=max(mx,a[i]);
		}
	}
	else if(a[i]<0)
		{	
		    r=-1;
		}
	}
//	ll r=*max_element(b,b+n);
	if(mx>-1){
		cout<<mx<<"\n";
	}else{
		cout<<r<<"\n";
	}
	re;
}
