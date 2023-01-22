#include<bits/stdc++.h>
using namespace std;
double binarysxpo(int x,int n){
  if(n==0){
    return 1;
  }else if(n<0){
    return (float)(1/x)*binarysxpo(x,n+1);
  }
  return x*binarysxpo(x,n-1);
}
int main(){
  int x,n;cin>>x>>n;
  cout<<binarysxpo(x,n);
}
