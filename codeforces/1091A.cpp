#include<bits/stdc++.h>
using namespace std;
int main(){
    int y,b,r;cin>>y>>b>>r;
    int mn=min({y,b,r});
    if(mn==y){
        int k=b-y,p=r-y;
        if(k==1 && p==2){
            cout<<mn*3<<endl;
        }else{
            cout<<
        }
    }else if(mn==b){
        if(r-b>=1){
            cout<<b-1+b+b+1<<endl;
        }else{
            cout<<b-2+b-1+b<<endl;
        }
    }else if(mn==b){
        cout<<b+b-1+b-2<<endl;
    }
}