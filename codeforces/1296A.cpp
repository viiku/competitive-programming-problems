#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define PER(i,n) for(int i=n;i>0;i--)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define ull unsigned long long int
#define test ll t; cin>>t; while(t--)
#define ld long double
#define re return 0
int main()
{
	#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
    #endif
	IOS;
	test{
	    int n,sum=0;
		cin>>n;
		int a[n],pe=0,po=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
			if(a[i]%2==0){
				pe++;
			}else{
				po++;
			}
		}
		if(sum%2!=0){
			cout<<"YES"<<"\n";
		}else{
			if(pe>=1 && po>=1){
				cout<<"YES"<<"\n";
			}else{
				cout<<"NO"<<"\n";
			}
		}
	}
	re;
}
