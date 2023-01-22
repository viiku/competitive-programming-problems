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
	test{
		int a,b,c,d,k;
		cin>>a>>b>>c>>d>>k;
//		int a[n];
/*		REP(i,n){
			cin>>a[i];
		}
	    */
       int p=0,q=0;
        if(a%c==0){
            p=a/c;
        }else{
            p=(a/c)+1;
        }
        if(b%d==0){
            q=b/d;
        }else{
            q=(b/d)+1;
        }
        if((p+q)>k){
            cout<<"-1"<<"\n";
        }else{
            if((p!=0)||(q!=0)){
                cout<<p<<" "<<q<<"\n";
            }else if(p==0){
                p++;
                if((p+q)<=k){
                    cout<<p<<" "<<q<<"\n";
                }else{
                    cout<<"-1"<<"\n";
                }
            }else if(q==0){
                q++;
                if((p+q)<=k){
                    cout<<p<<" "<<q<<"\n";
                }else{
                    cout<<"-1"<<"\n";
                }
            }
        }
	}
	re;
}
