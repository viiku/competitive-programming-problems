#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n "
#define REP(i,n) for(int i=0;i<n;i++)
#define ull unsigned long long int
#define ld long double
int main()
{
	IOS;
	ll x1,x2,x3,x4;
	ll a[4];
	REP(i,4){
		cin>>a[i];
	}
	sort(a,a+4);
		cout<<abs(a[3]-a[0])<<" "<<abs(a[3]-a[2])<<" "<<abs(a[3]-a[1])<<" ";
	return 0;
}
