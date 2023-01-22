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
	int n;
	cin>>n;
	int a[n];
	REP(i,n){
		cin>>a[i];
	}
	int p=*max_element(a,a+n);
	int q=*min_element(a,a+n);
	REP(i,n){
		if(a[i]==p && i!=0){
			swap(a[i],a[0]);
		}else if(a[i]==q && i!=(n-1)){
			swap(a[i],a[n-1]);
		}
	}
}
