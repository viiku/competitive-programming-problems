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
	ll n,k;
	cin>>n;
	ll a[n];
	REP(i,n){
		cin>>a[i];
	}
	ll mx=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			k=a[i]%a[j];
	        mx=max(mx,k);
		}
	}
	cout<<mx<<"\n";
	re;
}
