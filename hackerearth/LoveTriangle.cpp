#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll rec(ll n){
    if(n<10)
        return n;
    return n%9+10*rec(n/9);
}
int main(){
    ll n;
    while(cin>>n)
        cout<<rec(n)<<"\n";
}