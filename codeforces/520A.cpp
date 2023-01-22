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
    int n;cin>>n;
    string str;cin>>str;
    set<char>s;
    for(int i=0;i<str.size();i++){
        if(islower(str[i])){
            s.insert(str[i]);
        }else if(!islower(str[i])){
            str[i]=tolower(str[i]);
            s.insert(str[i]);
        }
    }
    if(s.size()>=26){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
	re;
}
