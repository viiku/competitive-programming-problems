#include<bits/stdc++.h>
using namespace std;
int n;
vector<bool>visited(n,false);
vector<int>adj[n+1];
void dfs(int v){
    visited[v]=true;
    cout<<v<<"->";
    for(int i=0;i<adj[v].size();i++){
        int child=adj[v][i];
        if(visited[child]==0) 
            dfs(child);
    }
}
int main(){
    int e,u,v;cin>>n>>e;
    while(e--){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(v);
}