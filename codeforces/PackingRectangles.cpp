#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
  int n,q;cin>>n>>q;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  ll prefixsum[n+1]={0};
  for(int i=0;i<n;i++){
    prefixsum[i+1]=prefixsum[i]+a[i];
  }
  while(q--){
    int left,right;cin>>left>>right;
    cout<<prefixsum[right]-prefixsum[left]<<endl;
  }
}
