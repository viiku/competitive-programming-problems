/*12-03-2021*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int n,q,k;cin>>n;
    int a[n],prefixsum[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    prefixsum[1]=a[1];
    for(int i=2;i<=n;i++){
        prefixsum[i]=prefixsum[i-1]+a[i];
    }
    cin>>q;while(q--){
        cin>>k;
        int l=1,r=n,mid=0,mx=0;
        while(l<r){
            mid=l+(r-l)/2;
            if((prefixsum[mid]-prefixsum[l])<k){
                r=mid-1;
            }else if((prefixsum[mid]-prefixsum[l])>k){
                l=mid+1;
            }else{
                mx=max(mx,mid-l+1);
            }
        }
        cout<<mx<<endl;
    }
}