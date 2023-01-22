#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
bool checkAnagram(string str){
  sort(str.begin(),str.end());
  if(mp[str]){
    return true;
  }
  return false;
}
int main(){
  int n;cin>>n;
  vector<string>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  for(int i=0;i<n;i++){
    if(checkAnagram(v[i])){
    }
  }
}
