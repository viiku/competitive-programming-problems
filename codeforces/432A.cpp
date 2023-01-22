#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n "
#define REP(i,n) for(int i=0;i<n;i++)
#define REPR(j,n) for(int j=0;j<n;j++)
#define ull unsigned long long int
#define PER(i,n) for(int i=n;i>0;i--)
using namespace std;
int main()
{
	IOS;
	int n,k,p=0;
	cin>>n>>k;
	int a[n];
	REP(i,n){
		cin>>a[i];
	}
	REP(i,n){
		if(5-a[i]>=k)
		{
			p++;
		}
	}
	if(p>=3)
	{
		cout<<(p/3)<<"\n";
	}
	else
	{
		cout<<"0"<<"\n";
	}
	return 0;
}
