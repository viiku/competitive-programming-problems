#include<bits/stdc++.h>
using namespace std;
int multi(int n,int m){
    if(n==1)
       return m;
    else if(m==1)
       return n;
    else
       return (n+multi(n,m-1));
}
int main(){
    int n,m;cin>>n>>m;
    cout<<multi(n,m)<<"\n";
}