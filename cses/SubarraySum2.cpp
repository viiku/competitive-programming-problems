/* Date:17-04-2021 */
/* Time:08:14:15 */
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
    int n,x;cin>>n>>x;
    int a[n];
    rep(i,0,n){
        cin>>a[i];
    }
    map<ll,int>mp;
    ll prefixsum=0,cnt=0;
    for(int i=0;i<n;i++){
        prefixsum+=a[i];
        if(prefixsum==x){
            cnt++;
        }
        cnt+=mp[prefixsum-x];
        mp[prefixsum]++;
    }
    cout<<cnt<<endl;
}
int main(){
    IOS;
    // testcases{
       solve();
    // }
}
// #include <iostream>
// #include <vector>
// #include <map>

// using namespace std;

// /**
//  * @author Qi Wang
//  * (detemplifying courtesy to Kevin Sheng)
//  */
// int main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int N, X;
// 	cin >> N >> X;
// 	vector<int> T(N);
// 	for (int i = 0; i < N; i++) {
// 		cin >> T[i];
// 	}

// 	long long prefix_sum = 0;
// 	long long ans = 0;
// 	map<long long, int> sums;
// 	sums[0] = 1;
// 	for (int x : T) {
// 		prefix_sum += x;
// 		/*
// 		 * If there is a subarray with a prefix sum of prefix_sum - X,
// 		 * we can exclude it from our current subarray to get the desired sum.
// 		 * Thus, we can add the number of those subarrays to our answer.
// 		 */
// 		ans += sums[prefix_sum - X];
// 		// Increment the amount of prefix sums with a sum of prefix_sum
// 		sums[prefix_sum]++;
// 	}
// 	cout << ans << endl;
// }
