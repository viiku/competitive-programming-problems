#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define PER(i,n) for(int i=n;i>0;i--)
#define ull unsigned long long int
#define ld long double
int main()
{
	IOS;
	ll t;
	cin>>t;
	while(t--)
	{
		ll m,b,c;
		cin>>m>>b>>c;
		ll a[]={m,b,c};
		ll n=sizeof(a)/sizeof(a[0]);
		sort(a,a+2);
		if((a[1]+a[2])%2==0)
		{
			if(a[0]%2==0){
				cout<<(a[1]+a[2])/2+(a[0]/2)<<"\n";
			}else if(a[0]%2!=0){
				cout<<(a[1]+a[2])/2+(a[0]-1)/2<<"\n";
			}
		}else if((a[1]+a[2])%2!=0){
			if(a[0]%2==0){
				cout<<((a[1]+a[2])/2+(a[0]/2))<<"\n";
			}else if(a[0]%2!=0){
				cout<<((a[1]+a[2])/2+(a[0]+1)/2)<<"\n";
			}
		}
	}
	return 0;
}
