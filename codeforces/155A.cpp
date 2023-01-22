#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define REPJ(j,n) for(int j=0;j<n;j++)
#define PER(i,n) for(int i=n;i>0;i--)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define REPJ1(j,n) for(int j=1;j<=n;j++)
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
int main()
{
	IOS;
//	test{
		int n;
		cin>>n;
		int a[n];
		REP(i,n){
			cin>>a[i];
		}
//	}
    int mx=a[0],mn=a[0],p=0,q=0;
    REP(i,n){
        if((a[i]<mn)&&(i>0)){
            mn=a[i];
            p++;
        }else if((a[i]>mx)&&(i>0)){
            mx=a[i];
            q++;
        }
    }
    cout<<(p+q)<<"\n";
	re;
}
