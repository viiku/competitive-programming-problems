
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
#define vii  vector<int>
#define pii  pair<int,int>
#define pll pair<ll,ll>
#define mpii map<char,int>
#define vll vector<ll>
#define mpll map<ll,ll>
#define vpi  vector<pair<int,int>>
#define umpll unordered_map<ll,ll>
#define pb push_back
#define eb emplace_back
const ll mod=(ll)1e9+7;
const ll maxi=(ll)1e18;
//char to integer (char-'0')
//Integer to char (char+'0')
int main(){
    IOS;
    string s,t1;
    test{
        cin.ignore();
        cin>>s>>t1;
        mpii mp,mp1;
        rep(i,0,s.size()){
            mp[s[i]]++;
        }
        rep(i,0,t1.size()){
            mp[t1[i]]++;
        }
        int k=s.size();
        int p=t1.size();
        if(s.size()>=t1.size()){
            size_t found=s.find(t1);
            if(found!=string::npos){
                if((k-p)%p==0 || ((k-p)%p==1 && mp.size()==mp1.size())){
                    int lcm=(k*p)/__gcd(k,p);
                    // cout<<lcm; 
                    while((lcm-p)>0){
                        cout<<t1;
                        lcm--;
                    }
                    cout<<"\n";
                }else if((k-p)%2==0 && mp.size()==1 && mp1.size()==1){
                    int lcm=(k*p)/__gcd(k,p);
                    // cout<<lcm;
                    while((lcm-p)>0){
                        cout<<t1;
                        lcm--;
                    }
                    cout<<"\n";
                }else{
                    cout<<-1<<"\n";
                }
            }else{
                cout<<-1<<"\n";
            }
        }else{
            size_t found=t1.find(s);
            if((p-k)%k==0){
                int lcm=(k*p)/__gcd(k,p);
                // cout<<lcm;
                while((lcm-k)>0){
                    cout<<s;
                    lcm--;
                }
                cout<<"\n";
            }else if((p-k)%k!=0 && mp.size()==1 && mp1.size()==1){
                int lcm=(k*p)/__gcd(k,p);
                // cout<<lcm;
                while((lcm-k)>0){
                    cout<<s;
                    lcm--;
                }
                cout<<"\n";
            }else{
                cout<<"-1\n";
            }
        } 
    }
}
