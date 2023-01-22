#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y'){
            continue;
        }else{
            if(isupper(str[i])){
                str[i]=tolower(str[i]);
                cout<<"."<<str[i];
            }else{
                cout<<"."<<str[i];
            }
        }
    }
    return 0;
}