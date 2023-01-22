#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define REPM(i,m) for(int i=0;i<m;i++)
#define PER(i,n) for(int i=n;i>0;i--)
#define REP1(i,n) for(int i=0;i<n-1;i++)
#define ull unsigned long long int
#define ld long double
#define re return 0
int main()
{
	IOS;
	int n,p=0,q=0;
	cin>>n;
	while(n--)
	{
		ll x,y;
		cin>>x>>y;
		if(x>0){
			p++;
		}else if(x<0){
			q++;
		}
		p;
		q;
	}
	if(p>q){
		cout<<p<<"YES"<<"\n";
	}else if(p<q){
		cout<<q<<"YES"<<"\n";
	}else{
		cout<<"NO"<<"\n";
	}
	re;
}
