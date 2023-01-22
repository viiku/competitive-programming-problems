
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
#define mpii map<int,int>
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
string str;
void read(){
    cin>>str;
    int k=str[(int)str.size()-1-'0']/2;
    if(str.size()<=2){
        int sum=str[0]-'0'+str[1]-'0';
        if(k%2==0){
            if(sum%2==0){
                
            }
        }
    }
    if(str.size()>2){
            if(k%2!=0){ //odd
    //Now it's odd number
        ll sum=0,cnt=0;
        for(int i=0;i<(int)str.size();i++){
            if((str[i]-'0')%2!=0){
                cnt++;
            }
            sum+=(str[i]-'0');
        }
        if(sum%2==0){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
        }
    }else if(k%2==0){ 
    //Now it's even
        ll sum=0,cnt=0,cnt1=0;
        for(int i=0;i<(int)str.size();i++){
            if((str[i]-'0')%2!=0){
                cnt++;
            }else if((str[i]-'0')%2==0){
                cnt1++;
            }
            sum+=(str[i]-'0');
        }
        if(sum%2==0){
            if(cnt>0){
                cout<<0<<endl;
            }else if(cnt==0){
                cout<<-1<<endl;
            }
        }else if(sum%2!=0){
            if(cnt>0){
                cout<<1<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
    }
    }
}
int main(){
    IOS;
    test{
        cin.ignore();
        read();
    }
}
