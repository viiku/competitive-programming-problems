#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;cin>>t;while(t--){
        cin>>n>>k;
        int a[n],mx=-1,mn=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mx=max(mx,a[i]);
            mn=min(mn,a[i]);
        }
        cout<<(mx-mn+2*k)<<"\n";
    }
    return 0;
}