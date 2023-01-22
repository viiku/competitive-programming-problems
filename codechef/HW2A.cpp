/* Date:22-03-2021 */
/* Time:19:25:43 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int n,m;cin>>n;
    int a[n],prefixsum[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    prefixsum[0]=a[0];
    for(int i=1;i<n;i++){
        prefixsum[i]=prefixsum[i-1]+a[i];
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<m;i++){
        if(b[i]<=prefixsum[0]){
            cout<<1<<endl;
        }else{
            int l=0,r=n-1,mid=0,ans=-1;
            while(l<=r){
                mid=l+(r-l)/2;
                if(b[i]<=prefixsum[mid]){
                    ans=mid;
                    r=mid-1;
                }else{
                    l=mid+1;
                }
            }
            cout<<ans+1<<endl;
        }
    }
}