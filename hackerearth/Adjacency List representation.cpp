#include<bits/stdc++.h>
using namespace std;
int main(){
   int num_vertices,num_edges;
    cin>>num_vertices>>num_edges;
    vector<int>adj[num_vertices+1];
    for(int i=0;i<num_edges;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<num_vertices;i++){
        cout<<i<<":";
        for(int j:adj[i]){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
       
} 