/* Date:07-04-2021 */
/* Time:16:40:07 */
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
// Creating sieve of length up to 99999999(<10^8)
ll sieve_size=1000001;
//creating a  bool array of this size;
bool bs[1000001]={false};
unordered_map<int,bool>mp;
void sieve(){ //create list of primes in [0 to n]
    bs[0]=bs[1]=true; //Except index 0 and 1
    mp.insert(make_pair(2,true));
    for(int i=2;i<=sieve_size;i+=2){ //This loop will decrease the time complexity by 1/2 but it still O(sqrt(n)).
        bs[i]=true;
    }
    for(ll i=3;i*i<=sieve_size;i+=2)if(!bs[i]) {
        for(ll j=i*i;j<=sieve_size;j+=i){
            bs[j]=true;
        }
    }
    
    for(int i=3;i<=sieve_size;i++){
        if(!bs[i]){
            mp.insert(make_pair(i,true));
        }else{
            mp.insert(make_pair(i,false));
        }
    }
    //Here primes size will denote the number of primes. 
}
void solve(){
    int q,n;cin>>q;while(q--){
        cin>>n;
        int cnt=0;
        // cout<<__gcd(2,10);
        for(int i=2;i<=n;i++){
            if(!mp[i] && __gcd(i,n)!=i){
                cnt++;
                cout<<i<<" ";
            }
        }
        // cout<<cnt<<endl;
    }
}
int main(){
    IOS;
    // testcases{
        // sieve();
        solve();
    // }
}