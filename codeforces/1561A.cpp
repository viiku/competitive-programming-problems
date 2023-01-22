#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;while(t--){
    int n;cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
      cin>>a[i];
    }
    int cnt=0;
    for(int i=1;i<=n-1;i++){
      int j=1;
      while(j<n){
        if(a[j]>a[j+1]){
          cnt++;
          swap(a[j],a[j+1]);
          j+=2;
        }else{
          j++;
        }
      }
    }
    cout<<cnt<<endl; 
  }
}
