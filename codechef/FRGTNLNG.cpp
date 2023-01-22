#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;cin>>test;while(test--){
    int n,k;cin>>n>>k;
    vector<string>v(n);
    map<string,int>mp;
    for(int i=0;i<n;i++){
      cin>>v[i];
      mp[v[i]]++;
    }
    while(k--){
      int l;cin>>l;
      for(int i=1;i<=l;i++){
        string str;cin>>str;
        if(mp.find(str)!=mp.end()){
          if(ok){
            ok=false;
          }
        }
      }
    }
  }
}
