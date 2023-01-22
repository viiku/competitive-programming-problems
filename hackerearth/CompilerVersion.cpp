#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    while(getline(cin,str)){
    bool ok=true;
    for(int i=0;i<str.size()-1;i++){
        if(str[i]=='/' && str[i+1]=='/'){
            ok=false;
        }else if(ok && str[i]=='-' && str[i+1]=='>'){
            str[i]='.';
            str.erase(i+1,1);
        }
    }
    for(int i=0;i<str.size();i++){
        cout<<str[i];
    }
    cout<<"\n";
    }
    return 0;
}