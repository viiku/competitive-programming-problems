#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    bool ok=true;
    for(int i=0;i<(int)str.size();i++){
        if(islower(str[i]) && (i+1)%2==0){
            ok=false;
        }else if(isupper(str[i]) && (i+1)%2!=0){
            ok=false;
        }
    }
    if(!ok){
        cout<<"No\n";
    }else{
        cout<<"Yes\n";
    }
}