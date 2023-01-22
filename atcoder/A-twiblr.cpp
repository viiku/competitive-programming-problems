#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    if(b>=(2*a+100)){
        cout<<0<<"\n";
    }else{
        cout<<2*a+100-b<<"\n";
    }
    return 0;
}