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
	ll n;
	cin>>n;
	ll a[n];
	REP(i,n){
		cin>>a[i];
	}
	sort(a,a+n);
		cout<<min(a[n-2]-a[0],a[n-1]-a[1])<<"\n";
	re;
}
	
