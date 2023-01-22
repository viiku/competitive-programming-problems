#include<bits/stdc++.h>
using namespace std;
int main(){
  string str;cin>>str;
  int n=(int)str.size();
  int sum=0,j=0;
  for(int i=n-1;i>=0;i--){
    int k=str[i]-'0';
    sum+=k*(pow(2,j));
    j++;
  }
  cout<<sum<<endl;
}
