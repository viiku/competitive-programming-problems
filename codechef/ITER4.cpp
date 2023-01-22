#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str,str1;cin>>t;while(t--){
        cin>>str>>str1;
        map<char,int>mp,mp1;
        for(int i=0;i<(int)str.size();i++){
            mp[str[i]]++;
        }
        for(int i=0;i<(int)str1.size();i++){
            mp1[str1[i]]++;
        }
        int cnt=0;
        for(auto it:mp){
            if(mp1.find(it.first)!=mp1.end()){
                continue;
            }else{
                cnt++;
            }
        }
        for(auto it:mp1){
            if(mp.find(it.first)!=mp.end()){
                continue;
            }else{
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}