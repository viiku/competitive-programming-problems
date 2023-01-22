#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    string str,ptr;
    unordered_map<string,int>mp;
    vector<string>v;
    int t,p=0,q=0;cin>>t;while(t--){
        cin>>str;
        mp[str]++;
        reverse(str.begin(),str.end());
        v.emplace_back(str);
    }
    for(int i=0;i<v.size();i++){
        if(mp.find(v[i])!=mp.end()){
            cout<<v[i].size()<<" "<<v[i][v[i].size()/2];
            break;
        }
    }
    return 0;
}