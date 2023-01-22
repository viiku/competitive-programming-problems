#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<tuple<string,char,int>>v;
    while(t--){
        string str;
        char ch;
        int a;
        cin>>str>>ch>>a;
        v.emplace_back(make_tuple(str,ch,a));
    }
    for(int i=0;i<v.size();i++){
        
    }
}