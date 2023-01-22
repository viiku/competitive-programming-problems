#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        if(str.size()<10){
            cout<<"NO\n";
        }else{
            bool ok=true;
            for(int i=0;i<(int)str.size();i++){
                if(!str[i]>='0' && !str[i]<='9'){
                    ok=false;
                }
            }
            if(ok && str[0]!='0'){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
}