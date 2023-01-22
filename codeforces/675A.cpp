#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;cin>>a>>b>>c;
    if(c==0){
        if(a==b){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }else{
        if(b%c==a && b>0 && c>0){
            cout<<b%c<<" YES"<<"\n";
        }else{
            cout<<b%c<<" NO"<<"\n";
        }
    }
    return 0;
    //TODO
}