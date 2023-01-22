#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;cin>>test;while(test--){
    int edges;cin>>edges;
    unordered_map<int,vector<int>>mp;
    for(int i=1;i<=edges;i++){
      int x,y;cin>>x>>y;
      mp[x].push_back(y);
      mp[y].push_back(x);
    }
    cout<<(int)mp.size()<<endl;
  }
}
