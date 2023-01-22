#include<bits/stdc++.h>
using namespace std;
int main(){
  int nodes,edges;
  cin>>nodes>>edges;
  vector<vector<int>>v(nodes+1);
  for(int i=0;i<edges;i++){
    int x,y;cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
  }
  for(int i=1;i<=nodes;i++){
    cout<<"Adjacency List of Node "<<i<<"-> ";
    for(int j=0;j<(int)v[i].size();j++){
      cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }
}
