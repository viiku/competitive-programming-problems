
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
#define test ll t; cin>>t; while(t--)
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
const ll maxi=(ll)1e18;
template<class T>
T min(T x,T y){
//Min function template
    return(x<y)?x:y;
}
//Number(n) of Digits in base(b)=floor(logb(n))+1
//char to integer (char-'0')
//Integer to char (char+'0')
ll n;
ll sieve_size;
bitset<10000010>bs;
vector<int>primes;

void sieve(ll n){ //create list of primes in [0 to n]
    sieve_size=n+1; // adding 1 to include n
    bs.set();  //set all bits to 1
    bs[0]=bs[1]=false; //Except index 0 and 1
    for(ll i=2;i<=sieve_size;i++) if(bs[i]) {
        for(ll j=i*i;j<=sieve_size;j+=i) bs[j]=0;
        primes.push_back((int) i);
    }
    //O(kloglogk)
}


//Number  of prime factors
ll numPF(ll k){
    ll i=0,count1=0;
    while(primes[i]*primes[i]<=k){
        if(k%primes[i]==0){
            while(k%primes[i]==0){
                k/=primes[i];
                count1++;
            }
            i++;
        }
    }
    return count1;   
}

void read_cases(){
    cin>>n;
}
int main(){
    IOS;
    test{
       read_cases();
    }
}
