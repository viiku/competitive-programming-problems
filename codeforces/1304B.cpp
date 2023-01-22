
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
#define mpii map<string,int>
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
int main(){
    IOS;
    mpii mp;
    vector<string>v;
    int n,m;string str,str1;cin>>n>>m;while(n--){
        cin>>str;
        if(mp.find(str)!=mp.end()){
            mp[str]++;
            continue;
        }else{
            reverse(str.begin(),str.end());
            str1=str;
            mp[str1]++;
        }
    }
    deque<string>dq;
    int k=0;
    forit(it,mp){
        if(it->second%2==0){
            k=it->second;
            while(k/2>0){
                dq.emplace_back(it->first);
                reverse(it->first.begin(),it->first.end());
                dq.emplace_front(it->first);
                k--;
            }
        }   
    }
    cout<<m*(k/2)<<"\n";
    while(!dq.empty()){
        cout<<dq.front();
        dq.pop_front();
    }
    return 0;
}
