#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int>nums(n),prefixSum(n+1,0);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  for(int i=0;i<n;i++){
    prefixSum[i+1]=prefixSum[i]+nums[i];
  }
  int ans=-1;
  for(int i=1;i<=n;i++){
     if(prefixSum[n]-prefixSum[i]==prefixSum[i-1]){
          ans=i-1;
     }
  }
  cout<<ans;
}
