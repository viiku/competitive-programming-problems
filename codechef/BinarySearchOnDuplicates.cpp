#include<bits/stdc++.h>
using namespace std;
//First Occurence of an element
int firstoccurence(int a[],int n,int k){
    int l=0,r=n-1;
    int mid=0,result=-1;
    while(l<r){
        mid=(l+r)/2;
        if(a[mid]>k){
            r=mid;
        }else if(a[mid]<k){
            l=mid;
        }else if(a[mid]==k){
            result=mid;
            r=mid-1;
        }
    }
    return result;
}
//Last occurence of an element
int lastoccurence(int a[],int n,int k){
    int l=0,r=n-1;
    int mid=0,result=-1;
    while(l<r){
        mid=(l+r)/2;
        if(a[mid]>k){
            r=mid;
        }else if(a[mid]<k){
            l=mid;
        }else if(a[mid]==k){
            result=mid;
            l=mid+1;
        }
    }
    return result;
}
//Count number of elements(x) in a sorted array using  binary search
int countx(int a[],int n,int k){
    if(firstoccurence(a,n,k) ==-1 || lastoccurence(a,n,k)==-1){
        return -1;
    }
    return lastoccurence(a,n,k)-firstoccurence(a,n,k)+1; 
}
//Number of Times a Sorted array is Rotated
int CountRotation(int a[],int n,int k){
     
}
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<firstoccurence(a,n,k)<<" "<<lastoccurence(a,n,k)<<" "<<countx(a,n,k)<<"\n";
    return 0;
}