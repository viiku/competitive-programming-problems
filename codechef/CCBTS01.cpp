#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin.ignore();
        cin>>str;
        bool ok=true,ok1=true,ok2=true;
        for(int i=0;i<3;i++){
            if(str[i]=='P'){
                ok=false;
            }else if(str[i]=='C'){
                ok1=false;
            }else if(str[i]=='M'){
                ok2=false;
            }
        }
        if(!ok && !ok1 && !ok2){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}