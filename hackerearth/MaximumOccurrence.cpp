#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main(){
    string str;//cin>>str;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;
    }
    int mx=0;
    char ch;
    for(auto it:mp){
        if(it.second>mx){
            mx=max(it.second,mx);
            ch=it.first;
        }
//        break;
    }
    cout<<ch<<" "<<mx<<"\n";
    return 0;
}