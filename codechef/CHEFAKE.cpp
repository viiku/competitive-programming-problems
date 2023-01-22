#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;string str;cin>>n>>str;
    map<int,int>mp;
    vector<int>v;
    for(int i=0;i<(int)str.size();i++){
        if(str[i]=='1'){
            v.emplace_back(i+1);
        }
    }
}