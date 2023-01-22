
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
int main(){
    IOS;
//    test{
        int n;
        cin>>n;
        int ar[n];
        REP(i,0,n){
           cin>>ar[i];
        }
        unordered_map<int,int>map1,map2;
        //same thing should be done for
        // finding frequencies of characters in a string
        for(int i=0;i<n;i++){
  //            map2[ar[i]]++;
            if(map1.find(ar[i])==map1.end()){
                //Here if map1 is searching for another similiar
                // if it wouldn't find then it'll pair up with 1
                //with given string/characters/int etc.
                map1.insert(mp(ar[i],1));
            }else{
                //else it'd increase the frequencies of that int,string
                //characters.
                map1[ar[i]]++;
            }
        }
        forit(it,map1){
            cout<<it->fi<<" "<<it->se<<"\n";
        }
        cout<<"\n";
        forit(it,map2){
            cout<<it->fi<<" "<<it->se<<"\n";
        }
//    }
re;
}
