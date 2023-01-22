#include<bits/stdc++.h>
using namespace std;
bool lucky(int n){
  while(n>0){
    if(n%10==4 || n%10==7){
      continue;
    }else{
      return false;
    }
    n/=10;
  }
  return true;
}
int main(){
  int n;cin>>n;
  if(n<4){
    cout<<0;
  }else{
    int cnt=0;
    for(int i=4;i<=n;i++){
      if(!lucky(i)){
        cout<<cnt<<" "; 
        cnt++;
       }
    }
    cout<<cnt<<endl;
  }
}
