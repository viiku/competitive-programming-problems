#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<2*n+((n-1)*n)/2<<"\n";
    }
    return 0;
}