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
        string str;
        cin>>str;
        int sum=0;
        for(int i=0;i<str.size()-2;i++){
            if(str[i]=='N'){
                sum=5;
                if(str[i+1]=='S'){
                    sum+=1;
                }else{
                    sum+=5;
                }
            }else if(str[i]=='S'){
                sum=5;
                if(str[i+1]=='N'){
                    sum+=1;
                }else{
                    sum+=5;
                }
            }else if(str[i]='E'){
                sum=5;
                if(str[i+1]=='W'){
                    sum+=1;
                }else{
                    sum+=5;
                }
            }if(str[i]=='W'){
                sum=5;
                if(str[i+1]=='E'){
                    sum+=1;
                }else{
                    sum+=5;
                }
            }
        }
        cout<<sum<<"\n";
    }
    re;

}
