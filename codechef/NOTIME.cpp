#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,x;cin>>n>>h>>x;
    int a[n];
    bool ok=true;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]+x==h){
            ok=false;
        }
    }
    if(!ok){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}