// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str,s;cin>>str;
//     int n=(int)str.size();
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             s.push_back(str[i]);
//         }else{
//             int k=(int)(str[i-1]-'0')+(int)(str[i]-'0');
//             s.push_back((char)k);
//         }
//     }
//     cout<<s<<endl;
// }
/* Date:01-05-2021 */
/* Time:20:25:11 */
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
const ll mod=(ll)1e9+9;
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
void solve(){
    // string str,ptr;cin>>str;
    // int n=(int)str.size();
    // int k=0;
    // for(int i=0;i<n;i++){
    //     if(i%2==0){
    //         ptr.push_back(str[i]);
    //         k=str[i]-'0';
    //     }else{
    //         int k1=str[i]-'0';
    //         int total=k+k1;
    //         char ch=total+'0';
    //         ptr.push_back(ch);
    //     }
    // }
    // cout<<ptr;
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int n=(int)arr.size();
    int mx=-1,mx1=-1;
    bool ok=true;
    sort(arr.begin(),arr.end());
    if(arr[0]==1){
        ok=false;
        for(int i=1;i<n;i++){
            if(abs(arr[i]-arr[i-1])<=1){
                continue;
                mx=max(mx,arr[i]);
            }else{
                arr[i]=arr[i-1]+1;
                mx=max(mx,arr[i]);
            }
        }
    }else{
        mx1=1;
        arr[0]=1;
        for(int i=1;i<n;i++){
            if(abs(arr[i]-arr[i-1])<=1){
                continue;
            }else{
                arr[i]=arr[i-1]+1;
            }
            mx1=max(mx1,arr[i]);
        }
    }
    if(!ok){
        // return mx;
        cout<<ok<<" "<<mx<<endl;
        return;
    }
    // return mx1;
    cout<<mx1<<endl;
}
int main(){
    IOS;
    // testcases{
       solve();
    // }
}