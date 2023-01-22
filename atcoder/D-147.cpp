
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,a,n) for(ll i=a;i<n;i++)
#define PER(i,n,a) for(ll i=n;i>a;i--)
#define REP1(i,a,n) for(ll i=a;i<=n;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back
#define PI 3.1415926535897932384626
#define MOD (ll)1000000007
#define fi first
#define se second
#define eb emplace_back
#define vll vector<ll>
#define vi  vector<int>
#define mpll map<ll,ll>
#define pll pair<ll,ll>
#define mp(x,y) make_pair(x,y)
const ll MAXI = (ll)1e9+7;
ll sumXOR(ll arr[],ll n) 
{ 
    ll sum = 0; 
    for (int i = 0; i < 32; i++)  
    { 
        //  Count of zeros and ones 
        int zc = 0, oc = 0;  
          
        // Individual sum at each bit position 
        ll idsum = 0;  
        for (int j = 0; j < n; j++) 
        { 
            if (arr[j] % 2 == 0) 
                zc++; 
            else
                oc++; 
            arr[j] /= 2; 
        } 
          
        // calculating individual bit sum  
        idsum = oc * zc * (1 << i);  
  
        // final sum     
        sum =(sum%MOD+idsum%MOD)%MOD;  
    } 
    return sum; 
} 
int main(){
    IOS;
//    test{
        ll n;
        cin>>n;
        ll arr[n];
        REP(i,0,n){
           cin>>arr[i];
        }
        cout<<sumXOR(arr,n);
//    }
re;
}
