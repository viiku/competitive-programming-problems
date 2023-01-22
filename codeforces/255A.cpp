
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
const ll MOD=(ll)1e9+7;
int main(){
    IOS;
//    test{
        int n;
        cin>>n;
        int ar[n];
        REP1(i,1,n){
           cin>>ar[i];
        }
        int sum_b=0,sum_c=0,sum_ba=0,p=0;
        if(n==1){
            cout<<"chest"<<"\n";
        }else if(n==2){
            if(ar[1]>ar[2]){
                cout<<"chest"<<"\n";
            }else{
                cout<<"biceps"<<"\n";
            }
        }else if(n==3){
            if(ar[1]>ar[2] && ar[1]>ar[3]){
                cout<<"chest"<<"\n";
            }else if(ar[2]>ar[1] && ar[2]>ar[3]){
                cout<<"biceps"<<"\n";
            }else if(ar[3]>ar[1] && ar[3]>ar[2]){
                cout<<"back"<<"\n";
            }
        }else if(n>3){
            for(int i=1;i<=n;i++){
                p++;
                if(p==1){
                    sum_c+=ar[i];
                }else if(p==2){
                    sum_b+=ar[i];
                }else if(p==3){
                    sum_ba+=ar[i];
                    p=0;
                }
            }
            int q=0;
            q=max({sum_c,sum_b,sum_ba});
            if(q==sum_c){
                cout<<"chest"<<"\n";
            }else if(q==sum_b){
                cout<<"biceps"<<"\n";
            }else if(q==sum_ba){
                cout<<"back"<<"\n";
            }
        }
//    }
re;
}
