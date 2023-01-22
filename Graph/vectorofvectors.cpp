#include<bits/stdc++.h>
using namespace std;
int nodes,edges;
vector<vector<int>>adj;
/*queue<int>q;
vector<bool>visited(nodes+1);
void bfs(int x){
  q.push(x);
  visited[x]=true;
  while(!q.empty()){
    int v=q.front();
    cout<<v<<" ";
    q.pop();
    for(int u:adj[v]){
      if(!visited[u]){
        visited[u]=true;
        q.push(u);

      }
    }
  }
  cout<<endl;
}*/
int main(){
//  int nodes,edges;
  cin>>nodes>>edges;
  adj.resize(nodes+1);
  for(int i=0;i<edges;i++){
    int x,y;cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  for(int i=0;i<nodes;i++){
    cout<<i+1<<"->";
    for(int j=0;j<(int)adj[i].size();j++){
      cout<<adj[i][j]<<" ";
    }
    cout<<endl;
  }
//  bfs(2);
}
