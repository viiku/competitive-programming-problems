
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
// int n;
bool specialchar(char ch){
    if(ch=='@' || ch=='#' || ch=='%' || ch=='&' || ch=='?'){
        return true;
    }
    return false;
}
string str;
void read(){
    cin>>str;
    bool ok=true,ok1=true,ok2=true,ok3=true;
    for(int i=0;i<(int)str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            ok=false;
        }else if(str[i]>='A' && str[i]<='Z' && i!=0 && i!=(int)str.size()-1){
            ok1=false;
        }else if(str[i]>='0' && str[i]<='9' && i!=0 && i!=(int)str.size()-1){
            ok2=false;
        }else if(specialchar(str[i]) && i!=0 && i!=(int)str.size()-1){
            ok3=false;
        }
    }
    if(!ok && !ok1 && !ok2 && !ok3 && (int)str.size()>=10){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}
int main(){
    IOS;
    test{
       read();
    }
}
