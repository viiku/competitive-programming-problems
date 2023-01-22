#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>adj;
int main(){
  int n,m;cin>>n>>m;
  adj.resize(n+1);
  for(int i=1;i<=m;i++){
    int vi,ui,ci,gi;
    cin>>vi>>ui>>ci>>gi;
    adj[vi].push_back(ui);
    adj[ui].push_back(vi);
  }

}
