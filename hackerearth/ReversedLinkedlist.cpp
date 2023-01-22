#include"bits/stdc++.h"
using namespace std;
int main(){
  int n;cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int i=0,j=0,x=0;
  while(j<n){
    if(a[j]%2==0){
      j++;
    }else{
      j--;
      while(j>=i){
        a[i]=a[j];
        x=a[i];
        a[j]=x;
        i++;
        j--;
      }
      j++;
    }
  }
  for(int i:a){
    cout<<i<<" ";
  }
}
