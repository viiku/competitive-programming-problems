#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x;cin>>t;while(t--){
        cin>>n>>x;
        int a[n],mx=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        if(mx>=x){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}