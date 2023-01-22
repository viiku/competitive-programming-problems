#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,string>mp;
    int n,m;string str,str1;cin>>n>>m;while(m--){
        cin>>str>>str1;
        mp.insert(make_pair(str,str1));
    }
    string str2[n];
    for(int i=0;i<n;i++){
        cin>>str2[i];
    }
    int i=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        while(i<n){
            if(mp.find(str2[i])!=mp.end()){
                cout<<it->first<<" "<<it->second<<"\n";
            }
            i++;
        }
    }
    return 0;
}
