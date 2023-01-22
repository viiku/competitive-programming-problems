#include<bits/stdc++.h>
using namespace std;
int main(){
  int nodes,edges;cin>>nodes>>edges;
  vector<int>adj[nodes+1];
  for(int i=1;i<=edges;i++){
    int x,y;cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  int ans=-1;
  for(int i=1;i<=nodes;i++){
    if((int)adj[i].size()==edges){
      ans=i;
    }
  }
  cout<<ans;
}
