#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=n-1,mid=0;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]>a[0]){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<n-l<<endl;
}