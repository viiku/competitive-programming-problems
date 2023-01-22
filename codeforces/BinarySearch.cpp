#include<bits/stdc++.h>
using namespace std;
bool searchArray(int a[],int n,int x){
  int left=0,right=n-1,mid;
  while(left<=right){
    mid=left+(right-left)/2;
    if(a[mid]==x){
      return true;
    }else if(a[mid]<x){
      left=mid+1;
    }else{
      right=mid-1;
    }
  }
  return false;
}
int main(){
  int n,k;cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  while(k>0){
    int query;cin>>query;
    if(searchArray(a,n,query)){
        cout<<"YES\n";
    }else{
    cout<<"NO\n";
    }
    k--;
  }
}
