#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
void rabin_karp(string pattern,string text){
    const int p=31;
    const int mod=1e9+1;
    int n=(int)pattern.size(),m=(int)text.size();
    
    //Pre-calculating power
    vector<ll>power(m+1);
    power[0]=1;
    for(int i=1;i<m;i++){
        power[i]=(power[i-1]*p)%mod;
    }

    //hash of each character of a string
    vector<ll>hash_text(m+1,0);
    for(int i=0;i<m;i++){
        hash_text[i+1]=(hash_text[i]+(text[i]-'a'+1)*power[i])%mod;
    }
    
    //hash of whole pattern
    ll hash_pattern=0;
    for(int i=0;i<n;i++){
        hash_pattern=(hash_pattern+(pattern[i]-'a'+1)*power[i])%mod;
    }
    
    //occurences of pattern in text
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
    string str;cin>>str;
    // cout<<compute_hash(str);
}