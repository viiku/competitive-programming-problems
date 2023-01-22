#include<bits/stdc++.h>
using namespace std;
void swappp(int &a,int &b){
  int temp=a;
  a=b;
  b=temp;
//  cout<<a<<" "<<b;
}
int main(){
  int x,y;cin>>x>>y;
  swappp(x,y);
  cout<<"x "<<x<<endl;
  cout<<"y "<<y<<endl;
}
