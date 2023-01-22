#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        double p,q;cin>>q>>p;
        if(q>1000){
            q=q-q*(0.1);
            cout<<fixed<<setprecision(6)<<q*p<<"\n";
        }else{
            cout<<fixed<<setprecision(6)<<p*q<<"\n";
        }
    }
    return 0;
}