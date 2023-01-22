#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define PER(i,n) for(int i=n;i>0;i--)
#define REPR(j,n) for(int j=0;j<n;j++)
#define ull unsigned long long int
#define re return 0
using namespace std;
int main()
{
	IOS;
	ll t;
	cin>>t;
	while(t--)
	{ 
		ll n,p,k=2;
		cin>>n;
		while(k>=2 && k<=30){
			p= (pow(2,k)-1);
			if(n%p==0)
			{
				cout<<n/p<<"\n";
			}
			k++;
		}
	}
	return 0;
}
