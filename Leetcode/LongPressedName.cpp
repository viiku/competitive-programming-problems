#include<bits/stdc++.h>
using namespace std;
int main(){
  string name,typed;cin>>name>>typed;
  unordered_map<char,int>mp;
  for(char c:typed){
    mp[c]++;
  }
  for(char c:name){
    if(mp.find(c)!=mp.end()){
      mp[c]--;
      if(mp[c]<0){

      }
    }  
  }
  for(auto it:mp){
    cout<<it.first<<" "<<it.second<<endl;
  }
}

