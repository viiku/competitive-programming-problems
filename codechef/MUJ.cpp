#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        if(str.size()<3){
            cout<<"NO\n";
        }else{
            bool ok=false;
            for(int i=0;i<str.size()-2;i++){
                if(str[i]=='M' && str[i+1]=='U' && str[i+2]=='J'){
                    ok=true;
                }
            }
            if(!ok){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
            }
        }
    }
    return 0;
}