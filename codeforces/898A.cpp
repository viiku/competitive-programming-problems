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
#define pb push_back()
int main()
{
	IOS;
/*	test{
		int n;
		cin>>n;
		int a[n];
		REP(i,n){
			cin>>a[i];
		}
	}
    */
    ll n,p=0;
    cin>>n;
    if(n%10==0){
        cout<<n<<"\n";
    }else{
        if(n%10<5){
            cout<<n-(n%10)<<"\n";
        }else if(n%10==5){
            cout<<n-(n%10)<<"\n";
        }else{
            p=10-(n%10);
            cout<<p+n<<"\n";
        }
    }
	re;
}
