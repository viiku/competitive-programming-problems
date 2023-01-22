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
		int n,p;
		cin>>n;
        p=(6-n);
        int r=0,g=0,b=0,o=0,x=0,y=0;
        string str;
		REP(i,n){
			cin>>str;
            if(str=="purple"){
                r++;
            }else if(str=="green"){
                g++;
            }else if(str=="blue"){
                b++;
            }else if(str=="orange"){
                o++;
            }else if(str=="red"){
                x++;
            }else if(str=="yellow"){
                y++;
            }
		}
        cout<<p<<"\n";
        if(r==0){
            cout<<"Power"<<"\n";
        }else if(g==0){
            cout<<"Time"<<"\n";
        }else if(b==0){
            cout<<"Space"<<"\n";
        }else if(o==0){
            cout<<"Soul"<<"\n";
        }else if(x==0){
            cout<<"Reality"<<"\n";
        }else if(y==0){
            cout<<"Mind"<<"\n";
        }
//	}
	re;
}
