
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,a,n) for(ll i=a;i<n;i++)
#define PER(i,n,a) for(ll i=n;i>a;i--)
#define REP1(i,a,n) for(ll i=a;i<=n;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back
#define PI 3.1415926535897932384626
#define MOD (ll)1000000007
#define fi first
#define se second
#define eb emplace_back
#define vll vector<ll>
#define vi  vector<int>
#define mpll map<ll,ll>
#define pll pair<ll,ll>
#define mp(x,y) make_pair(x,y)
const ll MAXI = (ll)1e9+7;
const ll max1 = (ll)1073741824;
ll countDivisiors(ll s){
    // sieve method for prime calculation 
    bool hash[s + 1]; 
    memset(hash, true, sizeof(hash)); 
    for (int p = 2; p * p < s; p++) 
        if (hash[p] == true) 
            for (int i = p * 2; i < s; i += p) 
                hash[i] = false; 
  
    // Traversing through all prime numbers 
    int total = 1; 
    for (int p = 2; p <= s; p++) { 
        if (hash[p]) { 
  
            // calculate number of divisor 
            // with formula total div =  
            // (p1+1) * (p2+1) *.....* (pn+1) 
            // where n = (a1^p1)*(a2^p2)....  
            // *(an^pn) ai being prime divisor 
            // for n and pi are their respective  
            // power in factorization 
            int count = 0; 
            if (s % p == 0) { 
                while (s % p == 0) { 
                    s = s / p; 
                    count++; 
                } 
                total = total * (count + 1); 
            } 
        } 
    } 
    return total; 
}
int main(){
    IOS;
/*    test{
        int n;
        cin>>n;
        int ar[n];
        REP(i,a,n){
           cin>>ar[i];
        }
    }
    */
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                ll q=countDivisiors(i*j*k);
                sum=(sum%max1+q%max1)%max1;
            }
        }
    }
    cout<<sum<<"\n";
re;
}
