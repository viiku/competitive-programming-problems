#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        bool ok=true;
        for(int i=0;i<str.size()-1;i++){
            if(abs(str[i]-str[i+1])!=1){
                if((str[i]=='z' && str[i+1]=='a')||(str[i]=='a' && str[i+1]=='z')){
                    ok;
                }else{
                    ok=false;
                }
            }
        }
        if(!ok){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}