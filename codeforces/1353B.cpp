#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n "
#define REP(i,n) for(int i=0;i<n;i++)
#define REPR(j,n) for(int j=0;j<n;j++)
#define ull unsigned long long int
#define PER(i,n) for(int i=n;i>0;i--)
int main()
{
	IOS;
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,sum=0,p=0;
		cin>>n>>k;
		int a[n],b[n];
		REP(i,n){
			cin>>a[i];
		}
		REPR(j,n){
			cin>>b[j];
		}
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		REP(i,n){
			REPR(j,n){
			    if(a[i]<b[j] && p<k)
				{
					swap(a[i],b[j]);
					p++;
				}
			}
		}
		cout<<accumulate(a,a+n,sum)<<"\n";
    }
    return 0;
}
	
	
