#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll t;cin>>t;
    while(t--){
        ll n,x,k,sum=0;
        cin>>n;
        k=n;
        while(n>0){
            cin>>x;
            sum=(sum+x)%k;
            n--;
        }
        if(sum==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}