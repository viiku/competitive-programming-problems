#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n "
#define REP(i,n) for(int i=0;i<n;i++)
#define REPR(j,n) for(int j=0;j<n;j++)
#define ull unsigned long long int
#define PER(i,n) for(int i=n;i>0;i--)
using namespace std;
int main()
{
	IOS;
	int n,p=1;
	cin>>n;
	int a[n][n];
	REP(i,n){
		REPR(j,n){
			if(i==0 && i<=j)
			{
				a[i][j]=1;
			}
			else if(j==0 && j<=i)
			{
				a[i][j]=1;
			}
			else
			{
				a[i][j]=a[i-1][j]+a[i][j-1];
			}
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
