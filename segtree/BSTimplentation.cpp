#include"bits/stdc++.h"
using namespace std;
int tree[4000000]={0};
void buildtree(int a[],int node,int left,int right){
  if(left==right){
    tree[node]=a[left];
  }else{
    int mid=left+(right-left)/2;
    buildtree(a,2*node+1,left,mid);
    buildtree(a,2*node+2,mid+1,right);
    tree[node]=max(tree[2*node+1],tree[2*node+2]);
  }
}
int main(){
  int n;cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  buildtree(a,0,0,n-1);
  for(int i=0;i<32;i++){
    cout<<tree[i]<<" " ;
  }
}

