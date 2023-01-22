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
    string str;
    cin>>str;
    int index=0;
    vector<int>v;
    int p=count(str.begin(),str.end(),1);
    reverse(str.begin(),str.end());
    if(p==0){
        cout<<"NO"<<"\n";
    }else{
        for(int i=0;i<str.size();i++)(
            v[i]=distance(str.begin(),1);
        )
    }
    for(int i=0;i<v.size()-1;i++){
        if(v[i+1]-v[i]==7){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
	re;
}
