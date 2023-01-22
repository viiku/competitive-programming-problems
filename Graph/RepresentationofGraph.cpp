#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>adj;
int main(){
/*  int nodes,edges;cin>>nodes>>edges;
  adj.resize(nodes+1);
  for(int i=1;i<=edges;i++){
    int x,y;cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  for(int i=1;i<=nodes;i++){
    cout<<i<<"->";
    for(int j=0;j<(int)adj[i].size();j++){
      cout<<adj[i][j]<<" ";
    }
    cout<<endl;
  }
  */

  int nodes,edges;cin>>nodes>>edges;
  adj.resize(nodes+1);
  for(int i=1;i<=edges;i++){
    int x,y;cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  for(int i=1;i<=nodes;i++){
    cout<<i<<"-> ";
    for(int j=0;j<(int)adj[i].size();j++){
      cout<<adj[i][j]<<" ";
    }
    cout<<endl;
  }
}
