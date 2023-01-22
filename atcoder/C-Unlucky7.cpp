
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

bool islucky(string ptr){
    bool ok=true;
    rep(i,0,ptr.size()){
        if(ptr[i]=='7'){
            ok=false;
        }
    }
    if(!ok)
        return false;
    return true;
}
int DecimalToOctal(int decinum){
    int octalnum=0,countval=1;
    while(decinum!=0){
        int remainder=decinum%8;
        octalnum+=remainder*countval;
        countval=countval*10;
        decinum/=8;
    }
    return octalnum;
}
int main(){
    IOS;
//    test{
        int n,k;cin>>n;
        string str,str1;
        int cnt=0;
        rep1(i,1,n){
            str=to_string(i);
            k=DecimalToOctal(n);
            str1=to_string(k);
            if(islucky(str) && islucky(str1)){
                cnt++;
            } 
        }
        cout<<cnt<<"\n";
//    }
re;
}
