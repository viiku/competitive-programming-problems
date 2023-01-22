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
	int a,b;
	cin>>a>>b;
	int n;
	cin>>n;
	ld mx=1000;
	while(n--){
		int x,y,v;
    	cin>>x>>y>>v;
    	ld p=sqrt(pow((x-a),2)+pow((y-b),2));
    	ld t=(p/v);
    	mx=min(t,mx);
	}
	cout<<fixed<<setprecision(20)<<mx<<"\n";
	re;
}
