#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll merge(int a[],int left,int mid,int right){
    int i=left,j=mid+1,k=0;
    ll cnt=0;
    int temp[right-left+1];
    while(i<=mid && j<=right){
        if(a[i]<=a[j]){
            temp[k]=a[i];
            k++;i++;
        }else{
            temp[k]=a[j];
            cnt+=(mid-i+1);
            j++;k++;
        }
    }
    while(i<=mid){
        temp[k]=a[i];
        i++;k++;
    }
    while(j<=right){
        temp[k]=a[j];
        j++;k++;
    }
    for(int i=left;i<=right;i++){
        a[i]=temp[i-left];
    }
    return cnt;
}
ll mergesort(int a[],int l,int r){
    ll cnt=0;
    if(l<r){
        int mid=l+(r-l)/2;
        cnt+=mergesort(a,l,mid);
        cnt+=mergesort(a,mid+1,r);
        cnt+=merge(a,l,mid,r);
    }
    return cnt;
}
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<mergesort(a,0,n-1)<<"\n";
    }
}

