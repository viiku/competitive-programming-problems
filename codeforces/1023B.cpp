#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll n,k;
    cin>>n>>k;
    if(k<=n){
        if(k%2!=0){
            k-=1;
            cout<<k/2<<"\n";
        }else{
            cout<<(k/2)-1<<"\n";
        }
    }else if((2*n)<=k){
        cout<<"0"<<"\n";
    }else if(k>n){
        if(k%2==0){
            k/=2;
            cout<<n-k<<"\n";
        }else{
            k-=1;
            k/=2;
            cout<<n-k<<"\n";
        }
    }
    return 0;
}