#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll n,s;cin>>n>>s;
    ll a[n],p=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=s){
            p++;
        }
    }
    if(p==0){
        cout<<-1<<"\n";
    }else{
        cout<<p<<"\n";
    }
    return 0;
}