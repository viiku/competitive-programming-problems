// Date:08-04-2021
// Time:23:38:25
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define testcases ll t; cin>>t; while(t--);
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll sieve_size=1000001;
bool bs[1000001]={false};
vector<ll>primes,prefixsum;
unordered_map<int,int>mp;
void sieve(){
    bs[0]=bs[1]=true;
    for(int i=2;i<=sieve_size;i+=2){
        bs[i]=true;
    }
    for(int i=3;i*i<=sieve_size;i+=2){
        if(!bs[i]){
            for(int j=i*i;j<=sieve_size;j+=i){
                bs[j]=true;
            }
        }
    }
    primes.push_back(2);
    mp[2]++;
    for(int i=3;i<=sieve_size;i++){
        if(!bs[i]){
            mp[i]++;
            primes.push_back(i);
        }
    }
    // debug(primes);
}
 
int main(){
    IOS;
    // testcases{
        sieve();
        int n;cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool ok=true;
        ll mx=0,mn=INT_MAX;
        for(int i=0;i<n;i++){
            if(mp.find(a[i])!=mp.end()){
                ok=false;
                mx=max(mx,a[i]);
                mn=min(mn,a[i]);
            }
        }
        if(!ok){
            cout<<mx-mn<<endl;
        }else{
            cout<<-1<<endl;
        }
    // }
}