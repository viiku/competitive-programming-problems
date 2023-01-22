#include<bits/stdc++.h>
using namespace std;
int partition(int *a,int start,int end){
  int pivot=a[end];
  int p_index=start;
  for(int i=start;i<end;i++){
    if(a[i]<=pivot){
      swap(a[i],a[p_index]);
      p_index++;
    }
  }
  swap(a[p_index],a[end]);
  return p_index;
}
void quicksort(int *a,int start,int end){
  if(start<end){
    int partitionIndex=partition(a,start,end);
    quicksort(a,start,partitionIndex-1);
    quicksort(a,partitionIndex+1,end);
  }
}
int main(){
  int t;cin>>t;while(t--){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
    cout<<endl;
  }
}
