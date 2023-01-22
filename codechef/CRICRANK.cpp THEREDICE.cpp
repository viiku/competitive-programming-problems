#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;while(t--){
    int r1,w1,c1,r1,w2,c2;
    cin>>r1>>w1>>c1;
    cin>>r2>>w2>>c2;
    int cnt=0;
    if(r1>r2){
      cnt++;
    }
    if(w1>w2){
      cnt++;
    }
    if(c1>c2){
      cnt++;
    }

    if(cnt>=2){
      cout<<"A\n";
    }else{
      cout<<"B\n";
    }
  }
}
