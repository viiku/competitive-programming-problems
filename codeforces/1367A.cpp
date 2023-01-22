#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define PER(i,n) for(int i=n;i>0;i--)
#define REP1(i,n) for(int i=0;i<n-1;i++)
#define REP2(i,n) for(int i=0;i<n-2;i+2)
#define ull unsigned long long int
#define ld long double
#define re return 0
int main()
{
	IOS;
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int n=str.size();
		if(n%2==0){
			REP(i,n){
				if(i==0 || i==(n-1))
				{
					cout<<str[i];
				}
			}
		}else if(n%2!=0){
			REP(i,(n-2)/2){
				if(i>0 && i<(n-2)/2)
				{
					cout<<str[i+1];
				}
			}
			
		}
		cout<<"\n";		
	}
	re;
}
