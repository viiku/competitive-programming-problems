#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int n,int val){
  int i=0,k=0;
  while(i<n){
    if(a[i]!=val){
      a[k]=a[i];
      k++;
    }
    i++;
  }
  for(int j=0;j<k;j++){
    cout<<a[j]<<" ";
  }
}
int main(){
  int n,val;cin>>n>>val;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  solve(a,n,val);
}
