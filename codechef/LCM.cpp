#include<bits/stdc++.h>
using namespace std;
using ll=long long  int;
int main(){
    ll a,b;
    cin>>a>>b;
    if(a==0 || b==0){
        cout<<0<<"\n";
    }else{
        cout<<a*(b/__gcd(a,b))<<"\n";
    }
}