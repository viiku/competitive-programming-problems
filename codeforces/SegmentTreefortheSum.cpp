/* Date:12-05-2021 */
/* Time:19:15:43 */
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
ll segtree[400001];
void buildtree(int a[],int node,int left,int right){
    if(left==right){
        segtree[node]=a[left];
    }else{
        int mid=left+(right-left)/2;
        buildtree(a,2*node+1,left,mid);
        buildtree(a,2*node+2,mid+1,right);
        segtree[node]=segtree[2*node+1]+segtree[2*node+2];
    }
}
void update(int node,int left,int right,int pos,int new_val){
    if(left==right){
        segtree[node]=new_val;
    }else{
        int mid=left+(right-left)/2;
        if(pos<=mid){
            update(2*node+1,left,mid,pos,new_val);
        }else{
            update(2*mid+2,mid+1,right,pos,new_val);
        }
        segtree[node]=segtree[2*node+1]+segtree[2*node+2];
    }
}
ll sum(int node,int left,int right,int l,int r){
    if(l>right || left>r){
        return 0;
    }
    if(left<=l && r>=right){
        return segtree[node];
    }
    int mid=left+(right-left)/2;
    return sum(2*node+1,left,mid,l,r)+sum(2*node+2,mid+1,right,l,r);
}
void solve(){
    int n,m;cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    buildtree(a,0,0,n-1);
    while(m--){
        int x,i,v,l,r;
        cin>>x;
        if(x==1){
            cin>>i>>v;
            update(0,0,n-1,i,v);
        }else if(x==2){
            cin>>l>>r;
            cout<<sum(0,0,n-1,l,r-1)<<endl;
        }
    }
}
int main(){
    IOS;
    // testcases{
       solve();
    // }
}