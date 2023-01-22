#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;cin>>n;
    x=2*n;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    sort(a,a+x);
    int ans=0;
    for(int i=0;i<(x-2);i++){
        ans+=abs(a[i]-a[i+1]);
    }
    int ans1=0;
    for(int j=n-1;j>(x-2);j--){
        ans1+=abs(a[j]-a[j-1]);
    }
    cout<<min(ans,ans1);
}