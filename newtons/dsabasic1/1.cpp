#include<bits/stdc++.h>
using namespace std;
map<string,vector<int>>mp;
void populateMap(string str,int index){
  sort(str.begin(),str.end());
  mp[str].push_back(index);
}
int main(){
  int n;cin>>n;
  vector<string>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  for(int i=0;i<n;i++){

  }
}
