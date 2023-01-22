#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;while(t--){
    int one=0,two=0;
    for(int i=1;i<=10;i++){
      int k;cin>>k;
      if(i%2!=0){
        if(k==1){
          one++;
        }
      }else{
        if(k==1){
          two++;
        }
      }
    }
    if(one==two){
      cout<<0<<endl;
    }else if(one>two){
      cout<<1<<endl;
    }else{
      cout<<2<<endl;
    }
  }
}
