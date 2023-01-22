
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
#define pb(n) push_back(n)
#define PI 3.1415926535897932384626
#define MOD (long long int)1000000007
#define F first
#define S second
#define eb(n) emplace_back(n)
#define vll vector<ll>
#define v  vector<int>
int main(){
    IOS;
    test{
        ll n,k;
        cin>>n>>k;
/*        ll a[n];
        vll vec;
        REP(i,n){
           cin>>a[i];
           vec.eb(a[i]);
        }
/*        for(int i=0;i<n;i++){
            reverse(vec.begin()+i,vec.end());
        }
        auto it=find(vec.begin(),vec.end(),k);
        cout<<distance(vec.begin(),it);

       pattern of each no. can be found using some mathematics like after
       Let's say we have 0,1,2,....N; after all the reverses, we will have,
        N,0,N-1,1,N-2,2.... N//2 n reverse there will be sequemce like n
       */
        if(k<(n-1-k)){
            cout<<(2*k+1)<<"\n";
        }else{
            cout<<2*(n-1-k)<<"\n";
        }
    }
re;
}
