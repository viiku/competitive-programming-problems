
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
#define pqi  priority_queue<int>
#define umpii unordered_map<int,int>
#define mp(x,y) make_pair(x,y)
#define vii  vector<char>
#define pii  pair<int,int>
#define pll pair<ll,ll>
#define mpii map<char,int>
#define vll vector<ll>
#define mpll map<ll,ll>
#define vpi  vector<pair<char,int>>
#define umpll unordered_map<ll,ll>
#define pb push_back
#define eb emplace_back
const ll mod=(ll)1e9+7;
const ll maxi=(ll)1e18;
//char to integer (char-'0')
//Integer to char (char+'0')
int main(){
    IOS;
    // test{
        // int n;cin>>n;
        // int a[n];
        string str;cin>>str;
        mpii mp;
        vii v,v1;
        rep(i,0,str.size()){
           mp[str[i]]++;
        }
        
        int cnt=0;
        for(auto it:mp){
            if(it.second%2!=0){
                cnt++;
            }
        }
        if(cnt>1){
            cout<<"NO SOLUTION\n";
            return 0;
        }else{
            for(auto it:mp){
                if(it.second%2==0){
                    int k=it.second/2;
                    while(k>0){
                        cout<<it.first;
                        v.eb(it.first);
                        --k;
                    }
                }else if(it.second%2!=0){
                    while(it.second>0){
                        v1.eb(it.first);
                        it.second--;
                    }
                }
            }
            for(auto it:v1){
                cout<<it;
            }
            reverse(all(v));
            for(auto it:v){
                cout<<it;
            }
        }
    // }
}
