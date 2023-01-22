
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define REPJ(j,n) for(int j=0;j<n;j++)
#define PER(i,n) for(int i=n;i>0;i--)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define REPJ1(j,n) for(int j=1;j<=n;j++)
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb(n) push_back(n)
#define PI 3.1415926535897932384626
#define MOD (long long int)1000000007
#define F first
#define S second
#define eb(n) emplace_back(n)
#define vll vector<ll>
#define v  vector<int>
/*
long long compute_hash(string const& s) {
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}
*/
int main(){
    IOS;
/*
    Given a list of n strings si,
    each no longer than m characters, 
    find all the duplicate strings and divide them into groups.

*/
/*
    vector<vector<int>>group_identical_strings(vector<string> const& s){
        int n=s.size();
        vector<pair<long long,int>>hashes(n);
        for(int i=0;i<n;i++){
            hashes[i]={compute_hash(s[i]),i};
        }
        sort(hashes.begin(),hashes.end());
        vector<vector<int>>groups;
        for(int i=0;i<n;i++){
            if(i==0 || hashes[i].F !=hashes.F){
                groups.eb();
            }
            groups.pb(hashes[i].S);
        }
        cout<<groups<<"\n";
    }
    (
    */
    int  compute_hash(strin){
        const int p=31;
        ll hash_value=0;
        ll p_pow=1;
        for(int i=0;i<str.size();i++){
            hash_value+=((str[i]-'a'+1)*(p_pow))%MOD;
            p_pow=(p_pow*p)%MOD;
        }
    }

    int n;
    cin>>n;
    vector<string>str={"welcome","to","geeks","for","geeks","for","good","coding"};
    vector<pair<int,int>>vp(n);
    for(int i=0;i<str.size();i++){
        hashes[i]={compute_hash(str[i]),i};
    }
