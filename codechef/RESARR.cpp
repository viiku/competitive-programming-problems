/*17-03-2021*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int n,l,r,k,q;cin>>n>>q;
    int a[n],difference[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    difference[1]=a[1];
    for(int i=2;i<=n;i++){
        difference[i]=a[i]-a[i-1];
    }
    while(q--){
        cin>>l>>r>>k;
        for(int i=l;i<=r;i++){
            difference[i]-=k;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<difference[i]<<" ";
    }
}
//TODO