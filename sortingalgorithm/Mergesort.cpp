#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int left,int mid,int right){
    int i=left,j=mid+1,k=0;
    int temp[right-left+1];
    while(i<=mid && j<=right){
        if(a[i]<=a[j]){
            temp[k]=a[i];
            k++;i++;
        }else{
            temp[k]=a[j];
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
};
void mergesort(int a[],int l,int r){
    if(l>=r){
        return;
    }
    int mid=(l+r)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,r);
    merge(a,l,mid,r);
}
int main(){
//  int t;cin>>t;while(t--){ 
       int n;cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       mergesort(a,0,n-1);
       for(int i=0;i<n;i++){
          cout<<a[i]<<" ";
       }
       cout<<endl;
//    }
}
