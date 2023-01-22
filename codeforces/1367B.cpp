#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
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
		int n,s=0,x=0;
		cin>>n;
		int a[n],p[n],q[n];
		REP(i,n){
			cin>>a[i];
		}
		REP(i,n){
			if(i%2==0){
				if(a[i]%2!=0){
					p[i]=a[i];
					s++;
				}else{
					p[i]=0;
				}
			}else if(i%2!=0){
				if(a[i]%2==0){
					q[i]=a[i];
					x++;
				}else{
					q[i]=0;
				}
			}
		}
	     if(s==x){
	     	cout<<s<<"\n";
		 }else{
		 	cout<<"-1"<<"\n";
		 }
	}
	re;
}
