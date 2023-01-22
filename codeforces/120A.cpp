#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;int a;
    cin>>str>>a;
    if(str=="front"){
        if(a==1){
            cout<<"L"<<"\n";
        }else if(a=2){
            cout<<"R"<<"\n";
        }
    }else if(str=="back"){
        if(a==2){
            cout<<"L"<<"\n";
        }else{
            cout<<"R"<<"\n";
        }
    }
    return 0;
}