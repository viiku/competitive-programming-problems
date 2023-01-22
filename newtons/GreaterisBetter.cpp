#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  int a[n];
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  stack<int>stk1,stk2;
  int x=-1,y=-1;
  int i=1,j=n;
  vector<int>forward(n),backward(n);
  while(i<=n && j>=1){
    while(!stk1.empty() && a[stk1.top()]<=a[i]){
      stk1.pop();
    }
    if(!stk1.empty()){
      x=stk1.top();
    }else{
      x=-1;
    }
    stk1.push(i);
    while(!stk2.empty() && a[stk2.top()]<=a[j]){
      stk2.pop();
    }
    if(!stk2.empty()){
      y=stk2.top();
    }else{
      y=-1;
    }
    stk2.push(j);
    forward[i]=x;
    backward[j]=y;
    i++;j--;
  }
  for(int k=0;k<n;k++){
    cout<<forward[k+1]+backward[k+1]<<" ";
  }
}
