/* Date:05-04-2021 */
/* Time:10:04:44 */
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
void solve(){
    int n;cin>>n;
    int price[n];
    for(int i=1;i<=n;i++){
        cin>>price[i];
    }
    stack<int>stk;
    vector<int>v;
    v.emplace_back(1);
    stk.push(price[0]);
    for(int i=2;i<=n;i++){
        int cnt=1;
        while(!stk.empty() && stk.top()<=price[i]){
            cnt++;
            stk.pop();
        }
        v.emplace_back(cnt);
        stk.push(price[i]);
    }
    for(int i:v){
        cout<<i<<" ";
    }
}
int main(){
    IOS;
    testcases{
       solve();
    }
}