#include<bits/stdc++.h>
using namespace std;
int main(){
  map<string,int>mp;
  int q;cin>>q;while(q--){
    string name;int x,y;
    cin>>x>>name;
    if(x==1){
      cin>>y;
      mp[name]+=y;
    }else if(x==2){
      if(mp.find(name)!=mp.end()){
        mp.erase(name);
      }
    }else if(x==3){
      if(mp.find(name)!=mp.end()){
        cout<<mp[name]<<endl;
      }else{
        cout<<0<<endl;
      }
    }
  }
}
