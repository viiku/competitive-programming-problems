#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    map<char,int>mp;
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;
        if(mp[str[i]]==1){
            cout<<str[i];
        }
    }
    return 0;
}