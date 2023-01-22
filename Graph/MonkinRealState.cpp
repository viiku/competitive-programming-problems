#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,e,;while(t--){
    cin>>e;
    vector<int>v[e];    
    while(e--){
      int x,y;cin>>x>>y;
      v[x].push_back(y);
      v[y].push_back(x);
    }
  }
  int ans=0;
  for(int i=0;i<e;i++){
      ans+=v[i].size();
  }
  cout<<ans<<endl;
}
