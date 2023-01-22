#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,t;cin>>n>>t;
  vector<pair<int,string>>v;
  while(n--){
    string name;int strength;cin>>name>>strength;
    v.push_back(make_pair(strength,name));
  }
  v.resize(n);
  sort(v.begin(),v.end());
  for(int i=0;i<t;i++){
    cout<<v[i].first<<"\n";
  }
}
