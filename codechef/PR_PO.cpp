#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;cin>>t;while(t--){
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int p=k%n;
        for(int i=n-p;i<n;i++){
            cout<<a[i]<<" ";
        }
        for(int i=0;i<(n-p);i++){
            cout<<a[i]<<" ";
        }
    }
}