#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll t,n;cin>>t;while(t--){
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll lcm=a[0];
        for(int i=1;i<n;i++){
            lcm=(lcm*a[i])/__gcd(lcm,a[i]);
            lcm%=2;
        }
        if(lcm%2==0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}