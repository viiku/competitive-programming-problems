#include<bits/stdc++.h>
using namespace std;
int n;
void read(){
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void merge(){
    int l=0,r=n-1;
    int m=l+(r-l)/2;
    int n1=m-l+1;
    int n2=r-m;
    int l[n1],r[n2];
    for(int i=0;i<n1;i++){
        l[i]=a[l+i]
    }
    for(int i=0;i<n2;i++){
        r[i]=a[]
    }
}
void MergeSort(){
 
}
int main(){
    read();
    mergesort(a,0,n,n-1);
}