#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;while(t--){
    int n,m;cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a.begin(),a.end());
    int sum=0;
    for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
        sum+=a[j]/(j+1);
      }
    }
    if(sum==m){
      cout<<"YES\n";
    }else{
      cout<<"NO\n";
    }
  }

  return 0;
}
