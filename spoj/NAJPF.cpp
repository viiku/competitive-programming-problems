/* Date:14-04-2021 */
/* Time:11:21:00 */
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
const ll mod1=(ll)1e9+7;
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
void rabin_karp(string pattern,string text){
    const int p=31;
    const int mod=1e9+1;
    int n=(int)pattern.size(),m=(int)text.size();
    
    //Pre-calculating power
    vector<ll>power(max(m,n));
    power[0]=1;
    for(int i=1;i<(int)power.size();i++){
        power[i]=(power[i-1]*p)%mod;
    }
 
    //hash of each character of a text string
    vector<ll>hash_text(m+1,0);
    for(int i=0;i<m;i++){
        hash_text[i+1]=(hash_text[i]+(text[i]-'a'+1)*power[i])%mod;
    }
    
    //hash of whole pattern
    ll hash_pattern=0;
    for(int i=0;i<n;i++){
        hash_pattern=(hash_pattern+(pattern[i]-'a'+1)*power[i])%mod;
    }
    
    //occurences of pattern in text
    vector<int>occurences;
    for(int i=0;i<m-n+1;i++){
        ll current_hash=(hash_text[i+n]+mod-hash_text[i])%mod;
        if(current_hash==hash_pattern*power[i]%mod){
            occurences.push_back(i);
        }
    }
    if((int)occurences.size()!=0){
        cout<<(int)occurences.size()<<endl;
        for(int i:occurences){
            cout<<i+1<<" ";
        }
    }else{
        cout<<"Not Found";
    }
    cout<<endl;
}
void solve(){
    string text,pattern;
    cin>>text>>pattern;
    rabin_karp(pattern,text);
}
int main(){
    IOS;
    testcases{
        cin.ignore();
        solve();
    }
}