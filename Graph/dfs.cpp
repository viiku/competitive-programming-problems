#include<bits/stdc++.h>
using namespace std;
int mn=1e5;
vector<vector<int>>adj;
vector<bool>mark(mn,false);
void dfs(int u){
  cout<<u<<"-> ";
  mark[u]=true;
  for(int v:adj[u]){
    if(!mark[v]){
      dfs(v);
    }
  }
}
int main(){
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
//cout<<"DFS Implementation\n";
//  dfs(3);
//  for(bool i:mark){
//    cout<<i<<" ";
//  }
}
