
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,a,n) for(ll i=a;i<n;i++)
#define PER(i,n,a) for(ll i=n;i>a;i--)
#define REP1(i,a,n) for(ll i=a;i<=n;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define all(x) (x).begin(),(x).end()
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back
#define PI 3.1415926535897932384626
#define fi first
#define se second
#define eb emplace_back
#define vll vector<ll>
#define vi  vector<int>
#define mpll map<ll,ll>
#define pll pair<ll,ll>
#define mp(x,y) make_pair(x,y)
const ll MAXI = (ll)1e9+7;
int main(){
	IOS;
//	test{
		int n;
		cin>>n;
		int ar[n];
		deque<int>dq;
		REP1(i,1,n){
		   cin>>ar[i];
		   dq.emplace_back(ar[i]);
		}
		int sum_s=0,sum_d=0,p=0;
		while(!dq.empty()){
			p++;
			if(p%2!=0){
				if(dq.front()>=dq.back()){
					sum_s+=dq.front();
					dq.pop_front();
				}else{
					sum_s+=dq.back();
					dq.pop_back();
				}
			}else if(p%2==0){
				if(dq.front()>=dq.back()){
					sum_d+=dq.front();
					dq.pop_front();
				}else{
					sum_d+=dq.back();
					dq.pop_back();
				}
			}
		}
		cout<<sum_s<<" "<<sum_d<<"\n";
//	}
re;
}
