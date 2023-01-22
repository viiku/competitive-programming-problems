#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  int k=n;
  int a[n];
  for(int i=1;i<=n;i++){
    int x;cin>>x;
    a[k]=x;
    k--;
  }
  int sum=0,prod=1;
  for(int i=1;i<=n;i++){
    if(i%2==0){
      sum+=a[i];
    }else{
      prod*=a[i];
    }
  }
  cout<<sum<<" "<<prod<<endl;
}
