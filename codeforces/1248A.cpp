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
	int t;
	cin>>t;
	while(t--)
	{
		ll n,p=0,q=0;
		cin>>n;
		ll a[n];
		REP(i,n){
			cin>>a[i];
			if(a[i]%2==0){
				p++;
			}else if(a[i]%2!=0){
				q++;
			}
		}
		ll m,r=0,s=0;
		cin>>m;
		ll b[m];
		REPM(i,m){
			cin>>b[i];
			if(b[i]%2==0){
				r++;
			}else if(b[i]%2!=0){
				s++;
			}	
		}
        cout<<(p*r+q*s)<<"\n";
	}
	re;
}
