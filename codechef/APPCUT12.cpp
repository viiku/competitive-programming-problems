#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,w;cin>>t;while(t--){
        cin>>w;
        if(w%2==0){
            if(w<=2){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
            }
        }else{
            cout<<"NO\n";
        }
    }
}