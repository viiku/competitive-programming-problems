//Can work for n<=1e7
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int lastDigit(ll n) {
  int a=0,b=1;
  if(n<2){
    return n;
  }
  int temp;
  for(int i=2;i<=n;i++){
    temp=(a+b)%10;
    a=b;
    b=temp;
  }
  return temp;
}
int main() {
    ll n;cin>>n;
    ll ans=lastDigit(n);
    cout<<ans<<endl;
    return 0;
}
