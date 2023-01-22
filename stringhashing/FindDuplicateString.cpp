// Date:14-04-2021
// Time:09:53:54
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
#define testcases ll t; cin>>t; while(t--);
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void rabin_karp(string pattern,string text){
    const int p=31;
    const int mod=1e9+1;
    int n=(int)pattern.size(),m=(int)text.size();
    //Pre-calculating power
    vector<ll>power(m+1);
    power[0]=1;
    // cout<<power[0]<<" ";
    for(int i=1;i<m;i++){
        power[i]=(power[i-1]*p)%mod;
        // cout<<power[i]<<" ";
    }

    //hash for each character of a string
    vector<ll>hash_text(m+1,0);
    for(int i=0;i<m;i++){
        hash_text[i+1]=(hash_text[i]+(text[i]-'a'+1)*power[i])%mod;
    }

    ll hash_pattern=0;
    for(int i=0;i<n;i++){
        hash_pattern=(hash_pattern+(pattern[i]-'a'+1)*power[i])%mod;
    }

    vector<int>occurences;
    for(int i=0;i<m-n+1;i++){
        ll current_hash=(hash_text[i+n]+mod-hash_text[i])%mod;
        if(current_hash==hash_pattern*power[i]%mod){
            occurences.push_back(i);
        }
    }
    for(int i:occurences){
        cout<<i<<" ";
    }
}
int main(){
    IOS;
    string text,pattern;cin>>text>>pattern;
    rabin_karp(pattern,text);
}