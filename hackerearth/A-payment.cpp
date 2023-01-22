#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,p=0;
  cin>>n;
  if(n>=1000){
      if(n%1000!=0){
    p=n/1000;
    cout<<((p+1)*(1000))-n<<"\n";
      }else if(n%1000==0){
          cout<<"0"<<"\n";
      }
  }else if(n<1000){
    cout<<(1000-n)<<"\n";
  }
}