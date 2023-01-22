#include<bits/stdc++.h>
using namespace std;
long long int  countWays(int n){
  long long int prev1=2,prev2=1;
  if(n==0){
    return 1;
  }
  if(n==1 || n==2){
    return n;
  }else{
    for(int i=3;i<=n;i++){
      long long int cur1=prev1+prev2;
      prev2=prev1;
      prev1=cur1;
    }
  }
  return prev1;
}
int main(){
  int test;cin>>test;while(test--){
    int n;cin>>n;
    cout<<countWays(n)<<endl;
  }
  return 0;
}
