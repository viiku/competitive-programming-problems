#include"bits/stdc++.h"
using namespace std;
int main(){
  int n;cin>>n;
  int a[n];
  map<int,bool>mp;
  priority_queue<int>pq;
  for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]=true;
    pq.push(a[i]);
  }
  int i=0;
  while(i<n){
    if(mp[i]){
      while(pq.top()>a[i]){
        if(mp[pq.top()]){
          i++;
        }else{
          pq.pop();
        }
      }
    }
  }
}
