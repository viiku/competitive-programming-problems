#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define PER(i,n) for(int i=n;i>0;i--)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define ull unsigned long long int
#define ld long double
#define re return 0
bool isodd(int i){
    return ((i%2)==1);
}
int main()
{
	IOS;
	ll t;
	cin>>t;
	while(t--)
	{
        ll n;
        cin>>n;
        ll a[n];
        vector<int>v;
        vector<int>:: iterator it;
        REP(i,n){
            cin>>a[i];
            v.push_back(a[i]);
        }
        for(int i=0;i<v.size();i++){
            remove_if(v.begin(),v.end(),isodd(i));
            cout<<
        }
    }
}