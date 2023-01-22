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
	test{
		ll n,k;
		cin>>n>>k;
		ll a[n],b[n];
		REP(i,n){
			cin>>a[i];
            if(a[i]>=k){
                if(a[i]%k==0){
                    b[i]=1;
                }else{
                    b[i]=0;
                }
            }else if(a[i]<k){
                b[i]=0;
            }
		}
        REP(i,n){
            cout<<b[i];
        }
	}
	re;
}
