#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
        ll t,n;cin>>t;while(t--){
        cin>>n;
        if(n%3==0 || n%5==0 || n%7==0 || n%9==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}