#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int l=0,h=n-1,mid,x=0;
    while(l<h){
        mid=(l+h)/2;
        if(a[mid]==1){
            h=mid-1;
        }else if(a[mid]==0){
            x=mid;
            l=mid+1;
        }
    }
    cout<<x<<" "<<l<<" "<<a[l]<<endl;
}