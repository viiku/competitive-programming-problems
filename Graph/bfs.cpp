#include<bits/stdc++.h>
using namespace std;
int nodes,edges;
vector<int>adj[nodes+1];
queue<int>q;
vector<bool>visited(nodes+1,false);
void bfs(int x){
  q.push(x);
  visited[x]=true;
  while(!q.empty()){
    int y=q.front();
    q.pop();
    cout<<y<<" ";
    for(int i=0;i<adj[y].size();i++){
      q.push(adj[y][i]);
      visited[adj[y][i]]=true;
    }
  }
}
int main(){
  cin>>nodes>>edges;
//  vector<int>adj[nodes+1];
  for(int i=1;i<=nodes;i++){
    int x,y;cin>>x>>y;
    adj[x].push_back(y);
//    adj[y].push_back(x);
  }
  int startingnode;cin>>startingnode;
  bfs(startingnode);
}
