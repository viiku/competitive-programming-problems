#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if(str=="HELLO"){
            cout<<"ENGLISH"<<"\n";
        }else if(str=="HOLA"){
            cout<<"SPANISH"<<"\n";
        }else if(str=="HALLO"){
            cout<<"GERMAN"<<"\n";
        }else if(str=="BONJOUR"){
            cout<<"GERMAN"<<"\n";
        }else if(str=="CIAO"){
            cout<<"ITALIAN"<<"\n";
        }else if(str=="ZDRAVSTVUJTE"){
            cout<<"RUSSIAN"<<"\n";
        }else if(str=="#"){
            
        }else{
            cout<<"UNKNOWN"<<"\n";
        }
    }
    return 0;
}
