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
//	test{
		int n;
		cin>>n;
        int p;
        cin>>p;
        int a[p];
        for(int i=0;i<p;i++){
            cin>>a[i];
//            s1.insert(a[i]);
        }
        int q;
        cin>>q;
        int b[q];
        for(int i=0;i<q;i++){
            cin>>b[i];
//            s2.insert(b[i]);
        }
        sort(a,a+p);
        sort(b,b+q);
        vector<int>v(p+q);
        vector<int>::iterator it;
        it=set_union(a,a+p,b,b+q,v.begin());
        v.resize(it-v.begin());
        if(v.size()==n){
            cout<<"I become the guy."<<"\n";
        }else{
            cout<<"Oh, my keyboard!"<<"\n";
        }
	re;
}
