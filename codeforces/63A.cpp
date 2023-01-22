#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string str,str1;
    vector<string>v,v1,v2,v3;
    while(n--){
        cin.ignore();
        cin>>str>>str1;
        if(str1=="woman" || str1=="child"){
            v2.push_back(str);
        }else if(str1=="rat"){
            v.emplace_back(str);
        }else if(str1=="captain"){
            v1.emplace_back(str);
        }else if(str1=="man"){
            v3.push_back(str);
        }
    }
    for(string x:v){
        cout<<x<<"\n";
    }
    for(string x:v2){
        cout<<x<<"\n";
    }
    for(string x:v3){
        cout<<x<<"\n";
    }
    for(string x:v1){
        cout<<x<<"\n";
    }
}