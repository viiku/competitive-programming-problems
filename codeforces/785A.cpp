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
int gcd(ll a,ll b){
	if(b==0)
		return 0;
	return gcd(b,a%b); 
}
int findlcm(ll arr[],ll n){
	int ans=arr[0];
	for (int i = 1; i < n; i++) 
        ans = (((arr[i] * ans))/(gcd(arr[i], ans))); 
    return ans; 
}
int main()
{
	IOS;
    int sum=0;
	test{
		string str;
        cin>>str;
        if(str=="Tetrahedron"){
            sum+=4;
        }else if(str=="Cube"){
            sum+=6;
        }else if(str=="Octahedron"){
            sum+=8;
        }else if(str=="Dodecahedron"){
            sum+=12;
        }else if(str=="Icosahedron"){
            sum+=20;
        }
	}
    cout<<sum<<"\n";
	re;
}
