#include<bits/stdc++.h>
using namespace std;
int  numways(int a[],int n,int size){
  if(n<1){
    return 0;
  }
  if(n<0){
    return numways(a,n,size-1);
  }
  return numways(a,n-a[n-1],size-1);
}
int main(){
  int n;cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

}
