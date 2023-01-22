#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,s;cin>>n>>p>>s;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,greater<int>());
    int cnt=0,k=s*p;
    for(int i=0;i<n;i++){
        if(k>0){
            k-=a[i];
            cnt++;
        }
    }
    if(k<=0){
        cout<<cnt<<"\n";
    }
    return 0;
}