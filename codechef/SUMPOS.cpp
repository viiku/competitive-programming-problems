#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,z;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y>>z;
        if(x+y==z || y+z==x || z+x==y){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}