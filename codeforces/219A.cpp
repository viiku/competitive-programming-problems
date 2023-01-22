#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char,int>mp;
    int k;string str;cin>>k>>str;
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;
    }
    int p=0;
    for(auto it:mp){
        if(it.second!=k){
            cout<<"-1"<<"\n";
            break;
        }else{
            p++;
        }
    }
}