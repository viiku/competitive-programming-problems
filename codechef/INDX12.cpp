#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char,int>mp;
    for(int i=0;i<26;i++){
        mp['a'+i]=i+1;
    }
    int t;string str;cin>>t;while(t--){
        cin>>str;
        int sum=0;
        for(int i=0;i<(int)str.size();i++){
            sum+=mp[str[i]];
        }
        if(sum%2!=0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
}