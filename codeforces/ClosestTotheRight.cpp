#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int x;
    while(k--){
        cin>>x;
        int l=1,r=n,mid=0,ans=n+1;
        while(l<=r){
            mid=l+(r-l)/2;
            if(a[mid]>=x){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
}