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
//	test{
		int n;
		cin>>n;
		vector<int>v1(n),vec;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            v1.emplace_back(a[i]);
        }
        int m;
        cin>>m;
        int c[m];
        vector<int>v2(m);
        for(int i=0;i<m;i++){
            cin>>c[i];
            v2.emplace_back(c[i]);
        }
        if(n>=m){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    vec[j]=v1[i]-v2[j];
                }
            }
            sort(vec.begin(),vec.end());
            unique(vec.begin(),vec.end());
            for(auto x:vec){
                cout<<x<<" ";
            }
        }else if(n<m){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    vec[j]=v2[i]-v1[j];
                }
            }
            sort(vec.begin(),vec.end());
            unique(vec.begin(),vec.end());
            for(auto x:vec){
                cout<<x<<" "; 
            }
        }
	re;
}
