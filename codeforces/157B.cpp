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
	int n,p=0;
	double sum=0,sum1=0;
	cin>>n;
	int a[n];
	REP(i,n){
		cin>>a[i];
	}
    sort(a,a+n,greater<int>());
    int i=0;
	while(n!=0){
		if(n%2==0){
			int p=pow(a[i],2);
	    	double pie=3.1415926536*p;
	    	i++;
	    	sum=sum+pie;
	    	n--;
		}else if(n%2!=0){
			int p=pow(a[i],2);
	    	double pie=3.1415926536*p;
	    	i++;
	    	sum1=sum1+pie;
	    	n--;
		}
	}
	cout<<fixed<<setprecision(10)<<abs(sum1-sum)<<"\n";
	return 0;
}
