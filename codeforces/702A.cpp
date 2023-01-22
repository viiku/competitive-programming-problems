#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mx=1,cnt=1;
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            cnt++;
            mx=max(mx,cnt);
        }else if(a[i]>=a[i+1]){
            mx=max(mx,cnt);
            cnt=1;
        }
    }
    cout<<mx<<"\n";
    return 0;
}