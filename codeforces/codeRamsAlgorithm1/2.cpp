#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mx=0,mn=1e9+7;
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mx=max(mx,a[i]);
            mn=min(mn,a[i]);
            if(a[j]==k || mx-mn==k){
                cnt++;
            }
        }
        mx=0;
        mn=1e9+7;
    }
    cout<<cnt<<"\n";
}