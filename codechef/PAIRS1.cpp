
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
ll binarySearch(ll arr[],ll low,ll high,ll x) 
{ 
    if (high >= low) 
    { 
        ll mid = low + (high - low)/2; 
        if (x == arr[mid]) 
            return mid; 
        if (x > arr[mid]) 
            return binarySearch(arr, (mid + 1), high, x); 
        else
            return binarySearch(arr, low, (mid -1), x); 
    } 
    return 0; 
} 
int main(){
    IOS;
//    test{
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        REP(i,0,n){
           cin>>arr[i];
        }
        sort(arr,arr+n);
        ll count=0;
        for(int i=0;i<n-1;i++){
            if(binarySearch(arr,i+1,n-1,arr[i]+k)!=-1){
                count++;
            }
        }
        cout<<count<<"\n";
//    }
re;
}
