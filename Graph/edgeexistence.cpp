#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>adj[10];
  int nodes,edges;cin>>nodes>>edges;
  for(int i=0;i<edges;i++){
    int x,y;cin>>x>>y;
    adj[x].push_back(y);
  }
  for(int i=0;i<nodes;i++){
    int a,b;cin>>a>>b;
    if(i==a-1){
      bool ok=true;
      for(int j=0;j<adj[i].size();j++){
         if(adj[i][j]==b){
           ok=false;
         }
       }
       if(!ok){
         cout<<"YES\n";
       }else{
         cout<<"NO\n";
       }
    }
    cout<<endl;
  }
}
