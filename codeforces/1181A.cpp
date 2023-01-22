#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll x,y,z;cin>>x>>y>>z;
    ll p=x%z,q=y%z;
    if((p+q)>=z){
        cout<<(x/z)+(y/z)+(p+q)/z<<" "<<z-max(p,q)<<"\n";
    }else{
        cout<<(x/z)+(y/z)+(p+q)/z<<" "<<0<<"\n";
    }
}