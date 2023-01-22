#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll t,n;
    cin>>t;while(t--){
        cin>>n;
        if(n%5==0 && n%15==0 && n%75==0){
            cout<<3<<endl;
        }else if((n%5==0 && n%15==0) || (n%5==0 && n%75==0) || (n%15==0 && n%75==0)){
            cout<<2<<endl;
        }else if(n%5==0 || n%15==0 || n%75==0){
            cout<<1<<endl;
        }else if(n%5!=0 && n%15!=0 && n%75!=0){
            cout<<0<<endl;
        }
    }
}