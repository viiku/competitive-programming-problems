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
	int a,b,c,p=0;
	cin>>a>>b>>c;
	if((a+b)>c && (b+c)>a && (c+a)>b){
		cout<<"0"<<"\n";
	}else if((a+b)<=c){
		cout<<c-(a+b)+1<<"\n";
	}else if((b+c)<=a){
		cout<<a-(b+c)+1<<"\n";
	}else if((a+c)<=b){
		cout<<b-(a+c)+1<<"\n";
	}
	re;
}
