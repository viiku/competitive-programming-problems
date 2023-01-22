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
#define pb() push_back()
#define eb() emplace_back()
#define vll vector<ll>
#define v  vector<int>
int main()
{
	IOS;
	test{
		ll n,p1=0,p2=0;
		cin>>n;
		ll a[n];
		REP1(i,n){
			cin>>a[i];
		}
		if(n==1){
			cout<<"first"<<"\n";
		}else if(n==2){
			if(a[1]>a[2]){
				cout<<"first"<<"\n";
			}else if(a[2]>a[1]){
				cout<<"second"<<"\n";
			}else if(a[1]==a[2]){
				cout<<"draw"<<"\n";
			}
		}else if(n>=3){
			REP1(i,n){
            if(i==1){
                p1=a[i];
            }else if(i>=2 && i<=3){
                p2+=a[i];
            }else if(i>3){
                if(i%2==0){
                    p1+=a[i];
                }else if(i%2!=0){
                    p2+=a[i];
                }
            }
            }
            if(p1<p2){
                cout<<"second"<<"\n";
            }else if(p1>p2){
                cout<<"first"<<"\n";
            }else{
                cout<<"draw"<<"\n";
            }
		}
		
	}
	re;
}
