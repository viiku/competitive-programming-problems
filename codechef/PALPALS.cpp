/*27-02-2021*/
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
const ll maxi=(ll)1e18+123;
template<class T>
T min(T x,T y){
//Min function template
    return(((x)<(y))?(x):(y));
}
//Number(n) of Digits in base(b)=floor(logb(n))+1
//char to integer (char-'0')
//Integer to char (char+'0')
string str;
void read_cases(){
    cin>>str;
    map<char,int>mp;
    for(int i=0;i<(int)str.size();i++){
        mp[str[i]]++;
    }
    if(mp.size()==str.size()){
        cout<<"NO\n";
    }else{
        int cnt=0,sum=0;
        for(auto it:mp){
            if(it.second==1){
                cnt++;
            }else if(it.second%2==0){
                sum+=it.second/2;
            }else if(it.second%2==1){
                 
            }
        }
        if(sum>=2*cnt){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}
int main(){
    IOS;
    test{
        cin.ignore();
        read_cases();
    }
}