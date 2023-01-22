/* Date:02-04-2021 */
/* Time:08:30:21 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int notlessthanX(int a[],int n,int k){
    int ans=0;
    if(a[n-1]<k){
        return 0;
    }else{
        int l=1,r=n,mid=0;
        while(l<=r){
            mid=l+(r-l)/2;
            if(a[mid]<=k){
                ans=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
    }
    return ans;
}
int greaterthanX(int a[],int n,int k){
    int ans=0;
    if(a[n-1]<k){
        return 0;
    }else{
        int l=1,r=n,mid=0;
        while(l<=r){
            mid=l+(r-l)/2;
            if(a[mid]>k){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
    }
    return ans;
}
int main(){
    IOS;
    int n,q,x,y;cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    cin>>q;
    while(q--){
        cin>>x>>y;
        if(x==0){
            cout<<notlessthanX(a,n,y)<<endl;
        }else if(x==1){
            cout<<n-greaterthanX(a,n,y)<<endl;
        }
    }
}
//TODO