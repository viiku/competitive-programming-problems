#include<bits/stdc++.h>
using namespace std;
int SumofDigits(int x){
  int sum=0;
  while(x>0){
    sum+=x%10;
    x/=10;
  }
  return sum;
}
int main(){
  int n,q;cin>>n>>q;
  int a[n];
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  while(q--){
    int x;cin>>x;
    bool ok=true;
    int ans=-1;
    for(int i=x+1;i<=n;i++){
      if((SumofDigits(a[x])>SumofDigits(a[i])) && a[x]<a[i]){
        ans=i;
      }
    }
    cout<<ans<<endl;
    }
}
