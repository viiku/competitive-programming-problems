
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define per(i,n,a) for(ll i=n;i>a;i--)
#define rep1(i,a,n) for(ll i=a;i<=n;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define all(x) (x).begin(),(x).end()
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back
#define pi 3.1415926535897932384626
#define eb emplace_back
#define vii  vector<int>
#define pii  pair<int,int>
#define mpii map<int,int>
#define umpii unordered_map<int,int>
#define vpi  vector<pair<int,int>>
#define pll pair<ll,ll>
#define vll vector<ll>
#define mpll map<ll,ll>
#define umpll unordered_map<ll,ll>
#define mp(x,y) make_pair(x,y)
const ll mod=(ll)1e9+7;
const ll maxi=(ll)1e18;
//char to integer (char-'0')
//Integer to char (char+'0')
bool bs[4000]={false};
vector<int>primes;
void isprime(){
    bs[0]=bs[1]=true;
    int sieve_size=4001;
    for(int i=2;i*i<=sieve_size;i++){
        if(!bs[i]){
            for(int j=i*i;j<=sieve_size;j+=i){
                bs[j]=true;
            }
        }
    }

    for(int i=2;i<=sieve_size;i++){
        if(!bs[i]){
            primes.push_back(i);
        }
    }
}
int main(){
    IOS;
//    test{
        int n;cin>>n;
        isprime();
        if(n<=5){
            cout<<0<<"\n";
        }else if(n>5){
/*            int cnt=0;
            for(int i=6;i<=n;i++){
                for(int j=2;j<=i;j++){
                    if(i%j==0 && isprime(j)){
                        cnt++;
                    }
                }
            }
            cout<<cnt<<"\n";*/
            for(auto it:primes){
                cout<<it<<" ";
            }
        }
//    }
re;
}
