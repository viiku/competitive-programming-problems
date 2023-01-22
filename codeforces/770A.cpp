#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    vector<char>v;
    for(int i=1;i<=n;i++){
      v.emplace_back('a'+i-1);
    }
    for(int i=0;i<n;i++){
        if(i<k){
            cout<<v[i];
        }
    }
    n-=k;
    while(n!=0){
        if(n%2=0){
            cout<<v[0]<<v[1];
            n=n-2;
        }else{
            cout<<v[0]
        }
    }
}