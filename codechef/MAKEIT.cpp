#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;cin>>t;while(t--){
        cin>>a>>b;
        if((a>0 && b>0) || (a<0 && b<0)){
            if((a-b)==0){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            if(a+b==0){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
}