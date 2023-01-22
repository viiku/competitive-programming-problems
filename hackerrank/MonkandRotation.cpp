#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;while(t--){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=1;i<=n;i++){
      cin>>a[i];
    }
    int d=k%n;
    if(d==0){
      for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
      }
    }else{
      for(int i=(n-d+1);i<=n;i++){
        cout<<a[i]<<" ";
      }
      for(int i=1;i<=n-d;i++){
        cout<<a[i]<<" ";
      }  
    }
    cout<<endl;
  }
}
