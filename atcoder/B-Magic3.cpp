#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s,d,x,y;cin>>n>>s>>d;
    bool ok=true;
    while(n--){
        cin>>x>>y;
        if(x<s && y>d){
            ok=false;
        }
    }
    if(!ok){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
}