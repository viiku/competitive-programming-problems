#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t,u;int a,b;cin>>s>>t>>a>>b>>u;
    if(u==s){
        cout<<a-1<<" "<<b<<"\n";
    }else if(u==t){
        cout<<a<<" "<<b-1<<"\n";
    }
}