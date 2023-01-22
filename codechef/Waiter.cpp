
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
#define PI 3.1415926535897932384626
#define MOD (long long int)1000000007
#define F first
#define S second
#define eb() emplace_back()
#define vll vector<ll>
#define v  vector<int>
int main(){
    IOS;
//    test{
        ll n,q;
        cin>>n;
        stack<ll>a,b,c;
        ll p[n];
        REP(i,n){
           cin>>p[i];
           a.push(p[i]);
        }
        int i=1,j=1;
/**        while(!a.empty()){
                if((a.top())%2==0){
                    if(i<=q){
                        b.push(a.top());
                        a.pop();
                    }
                    i++;
                }else if((a.top())%2!=0){
                    if(j<=q){
                        c.push(a.top());
                        a.pop();
                    }
                    j++;
                }
        }
        while (!b.empty()){
            cout<<b.top();
            b.pop();
        }
        */
        b.push
//    }
re;
}
