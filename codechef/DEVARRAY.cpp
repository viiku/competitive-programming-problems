#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,q;cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    while(q--){
        cin>>t;
        if(t>=a[0] && t<=a[n-1]){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}