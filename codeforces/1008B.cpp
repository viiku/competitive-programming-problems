#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n,p=0,q=0,mx=0,mn=0;cin>>n;
    for(int i=1;i<=n;i++){
        int w,h;cin>>w>>h;
        p++;
        if(p==1){
            mx=max(w,h);
            mn=mx;
            q++;
        }else if(p>=1){
            if(max(w,h)<=mx){
                mx=max(w,h);
                q++;
            }else if(min(w,h)<=mn){
                mn=min(w,h);
                q++;
            }
        }
    }
    if(q==n){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    return 0;
}