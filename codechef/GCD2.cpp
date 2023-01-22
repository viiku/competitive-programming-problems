#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll reduceB(ll a,string str){
    ll mod=0;
    for(int i=0;i<str.size();i++){
        mod=((mod*10+str[i])-'0')%a;
    }
    return mod;
}
ll gcdLarge(ll a,string str){
    ll num=reduceB(a,str);
    return __gcd(a,num);
}
int main(){
    ll n;
    cin>>n;
    while(n--){
        ll a;
        string str;
        cin>>a>>str;
        if(a==0){
            cout<<str<<"\n";
        }else{
            cout<<gcdLarge(a,str)<<"\n";
        }
    }
    return 0;
} 