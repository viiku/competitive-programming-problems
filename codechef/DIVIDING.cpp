#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll n;
    cin>>n;
    ll a[n],p=0;
    ll sum=(n*(n+1))/2;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        p+=a[i];
    }
    if((ll)sum==p){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    return 0;
} 