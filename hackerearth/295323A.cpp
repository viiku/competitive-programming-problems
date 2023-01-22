#include<bits/stdc++.h>
using  namespace std;
using  ll=long long int;
int main(){
    ll n,sump=0,sumn=0;
    cin>>n;
    ll a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>=0){
            sump+=a[i];
        }else if(a[i]<0){
            sumn+=a[i];
        }
    }
    if(abs(sumn)>=sump){
        cout<<0<<"\n";
    }else{
        ll p=*max_element(a+1,a+n);
        for(int i=1;i<=n;i++){
            if(a[i]==p){
                cout<<i<<"\n";
                break;
            }
        }
    }
    return 0;
}