#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    if(abs(a-b)==0){
        cout<<"YES\n";
    }else if(a>2*b || b>2*a || a>(b/2) || b>(a/2)){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
}