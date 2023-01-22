#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
  int n;cin>>n;
  int a[n];
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  int left,right;cin>>left>>right;
  ll prefixsum[n]={0};
  for(int i=1;i<=n;i++){
    prefixsum[i]=prefixsum[i-1]+a[i];
  }
//  for(int i=1;i<=n;i++){
//    prefixsum[i]=prefixsum[i-1]+a[i];
//     cout<<prefixsum[i]<<" ";
//  }
  cout<<prefixsum[right+1]-prefixsum[left];
}
