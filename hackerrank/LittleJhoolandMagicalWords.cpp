#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;cin>>t;while(t--){
      string str;cin>>str;
      map<char,int>mp;
      for(char c:str){
        mp[c]++;
      }
      int r=0,u=0,b=0,y=0;
      for(auto it:mp){
        if(it.first=='r'){
           r=it.second;
        }else if(it.first=='u'){
           u=it.second;
        }else if(it.first=='b'){
           b=it.second;
        }else if(it.first=='y'){
           y=it.second;
        }
      }
      cout<<min({r,u,b,y})<<endl;
   }
}
