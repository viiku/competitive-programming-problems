#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,k,x,ans=0;cin>>m>>n>>k;
    int p=k,ans1=0; 
    while(m--){
        cin>>x;
        if(k>0){
            ans+=(n-x);
            k--;
        }
        ans1+=(n-x);
    }
    if(p==0){
        cout<<ans1<<endl;
    }else{
        cout<<ans<<endl;
    }
}