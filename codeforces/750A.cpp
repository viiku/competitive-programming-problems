#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define PER(i,n) for(int i=n;i>0;i--)
#define ull unsigned long long int
#define re return 0
using namespace std;
int main()
{
	IOS;
	int n,k;
	cin>>n>>k;
	int a[n]={0},total=0;
	REP1(i,n){
		total +=i*5;
		a[i]=total;
	}
	int l=1,h=n,ans=0,m;
/*	if(a[h]+k<=240){
		cout<<h<<"\n";
	}
	*/
	while(l<=h){
		m=(l+h)/2;
		if(a[m]+k<=240){
			ans=m;
			l=m+1;
		}else{
			h=m-1;
		}
	}
	cout<<ans<<"\n";
	re;
}
