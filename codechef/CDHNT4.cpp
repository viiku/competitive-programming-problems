#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll factorial(ll n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    ll t,x;cin>>t;while(t--){
        cin>>x;
        cout<<factorial(x)<<endl;
    }
}