#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        map<char,int>mp;
        string str;cin>>str;
        for(int i=0;i<str.size();i++){
            mp[str[i]]++;
            if(mp[str[i]]==1){
                cout<<str[i];
            }
        }
        cout<<"\n";       
    }
    return 0;
}