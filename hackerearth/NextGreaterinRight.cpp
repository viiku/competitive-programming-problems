/* Date:05-04-2021 */
/* Time:08:57:53 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define ld long double
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define per(i,n,a) for(ll i=n-1;i>=a;i--)
#define rep1(i,a,n) for(ll i=a;i<=n;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define all(x) (x).begin(),(x).end()
#define prec(n) fixed<<setprecision(n)
#define testcases ll t; cin>>t; while(t--)
#define pi 3.1415926535897932384626433832795
#define mp(x,y) make_pair(x,y)
#define vii  vector<int>
#define pii  pair<int,int>
#define pll pair<ll,ll>
#define mpii map<int,int>
#define vll vector<ll>
#define mpll map<ll,ll>
#define vpi  vector<pii>
#define umpll unordered_map<ll,ll>
#define pqi  priority_queue<int>
#define umpii unordered_map<int,int>
#define pb push_back
#define eb emplace_back
const ll mod=(ll)1e9+7;
const ll maxi=(ll)1e18+123;
//Number(n) of Digits in base(b)=floor(logb(n))+1
//char to integer (char-'0')
//Integer to char (char+'0')
int sumofDigits(int k){
    int sum=0;
    while(k>0){
        sum+=k%10;
        k/10;
    }
    return sum;
}
void solve(){
    int n;cin>>n;
    int a[n];
    rep1(i,1,n){
        cin>>a[i];
    }
    stack<int>stk;
    int v[n];
    for(int i=n;i>=1;i--){
        int k1=sumofDigits(a[stk.top()]);
        int k2=sumofDigits(a[i]);
        while(!stk.empty() && a[stk.top()]<=a[i] && k1>k2){
            stk.pop();
        }
        if(stk.empty()){
            v[i]=-1;
        }else{
            v[i]=stk.top();
        }
        stk.push(i);
    }
    rep1(i,1,n){
        cout<<v[i]<<" ";
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    IOS;
    // testcases{
       solve();
    // }
}