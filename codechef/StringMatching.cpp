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
/*		ll n;
		cin>>n;
		string str,str1;
		cin>>str;
		cin>>str1;
		// Naive Approach
	/*	for(int i=0;i<str1.size();i++){
			int j;
			for(j=0;j<n;j++){
				if(i+j>=str1.size() || str[j]!=str1[i+j]){
					break;
				}
			}
			if(j==n){
				cout<<i<<"\n";
			}
			*/
			// KMP Approach 
			string str,str1;
			getline(cin,str);
			getline(cin,str1);
			int i=0,j=-1,
		}
	}
	re;
}

