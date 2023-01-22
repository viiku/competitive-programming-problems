#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;cin>>t;while(t--){
        int r,g,b,w;cin>>r>>g>>b>>w;
        if(r==g && g==b && b==w){
            cout<<"Yes\n";
        }else{
            if(r!=0 && g!=0 && b!=0 && g!=0){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
        }
    }
    return 0;
}