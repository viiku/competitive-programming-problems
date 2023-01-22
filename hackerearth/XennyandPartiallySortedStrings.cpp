#include<bits/stdc++.h>
using namespace std;
int m;
bool compare(string str,string str1){
  string a=str.substr(0,m);
  string b=str1.substr(0,m);
  return a<b;
}
int main(){
  int t;cin>>t;while(t--){
    int n,k;cin>>n>>k>>m;
    vector<string >v(n);
    for(int i=0;i<n;i++){
      string str;cin>>str;
      v[i]=str;
    }
    sort(v.begin(),v.end(),compare);
    cout<<v[k-1]<<endl;
  }
  return 0;
}
