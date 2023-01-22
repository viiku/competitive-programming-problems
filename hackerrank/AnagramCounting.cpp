/* Date:24-03-2021 */
/* Time:21:36:27 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void search_range(int a[],int n,int k){
    int l=0,r=n-1,mid=0,ans=-1;
    while(l<=r){
        mid=l+(r-l)/2;
        if(a[mid]>k){
            r=mid-1;
        }else if(a[mid]<k){
            l=mid+1;
        }else{
            ans=mid;
            r=mid-1;
        }
    }
    int l1=0,r1=n-1,mid1=0,ans1=-1;
    while(l1<=r1){
        mid1=l1+(r1-l1)/2;
        if(a[mid1]<k){
            l1=mid1+1;
        }else if(a[mid1]>k){
            r1=mid1-1;
        }else{
            ans1=mid1;
            l1=mid1+1;
        }
    }
    cout<<ans<<" "<<ans1;
}
int main(){
    IOS;
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    search_range(a,n,k);
}