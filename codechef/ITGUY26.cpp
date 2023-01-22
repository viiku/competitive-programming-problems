
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
int fact(int n){
    return n*fact(n-1);
}
int main(){
    IOS;
    test{
        int n;cin>>n;
        vector<int>v={1,1,2,6,24,120,720,4500,5040,40320};
        string str=to_string(n);
        int sum=0; 
        for(int i=0;i<str.size();i++){
            if(str[i]=='0' || str[i]=='1'){
                sum+=1;
            }else if(str[i]=='2'){
                sum+=2;
            }else if(str[i]=='3'){
                sum+=6;
            }else if(str[i]=='4'){
                sum+=24;
            }else if(str[i]=='5'){
                sum+=120;
            }else if(str[i]=='6'){
                sum+=720;
            }else if(str[i]=='7'){
                sum+=5040;
            }else if(str[i]=='8'){
                sum+=40320;
            }else if(str[i]=='9'){
                sum+=362880;
            }
        }

        if(sum==n){
            cout<<1<<"\n";
        }else{
            cout<<0<<"\n";
        }
    }
re;
}
