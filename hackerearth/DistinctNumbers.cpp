#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll n;
    cin>>n;
    ll a[n];
    set<ll>s1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s1.insert(a[i]);
    }
    cout<<s1.size();
    return 0;
}