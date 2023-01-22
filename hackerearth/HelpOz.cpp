#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
const ll mn=INT_MAX;
const ll mx=INT_MIN;
int main(){
    ll n;cin>>n;
    ll a[n];
    ll mn=INT_MAX;
    ll mx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    ll k=mx-mn;
    vector<ll>v;
    for(int i=2;i*i<=k;i++){
        if(k%i==0){
            v.emplace_back(i);
            if(i!=k/i){
                v.emplace_back(k/i);
            }
        }
    }
    vector<ll>v1;
    for(int i=0;i<v.size();i++){
        int temp=a[0]%v[i];
        int j;
        for(j=1;j<n;j++){
            if(a[j]%v[i]!=temp){
                break;
            }
        }
        if(j==n){
            v1.emplace_back(v[i]);
        }
    }
    sort(v1.begin(),v1.end());
    for(int i:v1){
        cout<<i<<" ";
    }
}