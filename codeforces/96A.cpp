#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    bool ok=true;
    int cnt=0;
    for(int i=0;i<str.size()-1;i++){
        if(str[i]!=str[i+1]){
            // cnt++;
            if(cnt>=7){
                ok=false;
            }
            cnt=1;
        }else{
            cnt++;
        }
    }
    if(!ok){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}