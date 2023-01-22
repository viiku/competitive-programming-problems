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
        if(k<a[1]){
            cout<<0<<" "<<0<<endl;
        }else if(k>a[n]){
            cout<<n<<" "<<prefixsum[n]<<endl;
        }else{
            int l=1,r=n,mid=0,ans=0;
            while(l<=r){
                mid=(l+r)/2;
                if(a[mid]<=k){
                    ans=mid;
                    l=mid+1;
                }else{
                    r=mid-1;
                }
            }
            cout<<ans<<" "<<prefixsum[ans]<<endl;
        }
    }
}