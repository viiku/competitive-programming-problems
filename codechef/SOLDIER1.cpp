#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll n;cin>>n;
    ll a[n];
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto it:mp){
        if(it.second>=(n/2)){
            cout<<it.first<<endl;
        }
    }
}