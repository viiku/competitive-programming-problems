//Lower Bound Implementation//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=n-1,mid=0,x=0;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]>=k){
            x=a[mid];
            r=mid-1;
        }else if(a[mid]<k){
            l=mid+1;
        }
    }
    cout<<x<<endl;
}