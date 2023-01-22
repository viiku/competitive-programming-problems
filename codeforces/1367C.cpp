#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define PER(i,n) for(int i=n;i>0;i--)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define ull unsigned long long int
#define ld long double
#define re return 0
int main()
{
	IOS;
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n];
		string str;
		cin>>str;
		REP1(i,n){
			if(str[i]==1){
				a[i]=i;
		}else{
			a[i]=0;
		}
		REP1(i,n){
			if(abs(str[i]-str[i+1])%k==0){
				cout<<(abs(str[i]-str[i+1])/k-1)<<"\n";
			}else{
				cout<<(abs(str[i]-str[i+1])/k)<<"\n";
			}
		}
	}
		
}
	return 0;
}
