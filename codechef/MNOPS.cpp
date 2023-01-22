#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;string str,ptr;cin>>t;while(t--){
    cin>>str>>ptr;
  int n=(int)str.size(),cnt=0;
  for(int i=0;i<n;i++){
    if(str[i]!=ptr[i]){
      cnt++;
    }
  }
  cout<<cnt*cnt<<endl; 
 }
}
