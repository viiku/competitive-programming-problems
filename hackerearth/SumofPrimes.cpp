/* Date:13-04-2021 */
/* Time:08:59:58 */
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
//For Debugging
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
//Number(n) of Digits in base(b)=floor(logb(n))+1
//char to integer (char-'0')
//Integer to char (char+'0')
ll sieve_size=1000001;
bool bs[1000001]={false};
vector<ll>primes,prefixsum;
void sieve(){
    bs[0]=bs[1]=true;
    for(int i=2;i<=sieve_size;i+=2){
        bs[i]=true;
    }
    for(int i=3;i*i<=sieve_size;i+=2){
        if(!bs[i]){
            for(int j=i*i;j<=sieve_size;j+=i){
                bs[j]=true;
            }
        }
    }
    primes.push_back(2);
    for(int i=3;i<=sieve_size;i++){
        if(!bs[i]){
            primes.push_back(i);
        }
    }
    // debug(primes);
}
void solve(){
    int k=primes.size();
    vector<ll>prefixsum(k+1,0);
    for(int i=0;i<primes.size();i++){
        prefixsum[i+1]=prefixsum[i]+primes[i];
    }
    // debug(prefixsum);
    int n,l,r;cin>>n;while(n--){
        cin>>l>>r;
        int l1=lower_bound(all(primes),l)-primes.begin();
        int r1=upper_bound(all(primes),r)-primes.begin();
        // if(l1!=0){
        //     cout<<prefixsum[r1-1]-prefixsum[l1-1]<<endl;
        // }else{
        //     cout<<prefixsum[r1-1]<<endl;
        // }
        // cout<<l1<<" "<<r1<<endl;
        cout<<prefixsum[r1]-prefixsum[l1]<<endl;  
    }  
}
int main(){
    IOS;
    sieve();
    // testcases{
       solve();
    // }
}