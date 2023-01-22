#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    map<char,int>mp;
    //1st method // O(string.size()*2)
    for(int i=0;i<(int)str.size();i++){
        bool ok=true;
        for(int j=0;j<(int)str.size();j++){
            if(i!=j && str[i]==str[j]){
                ok=false;
            }
        }
        if(ok){
            cout<<str[i]<<endl;
            break;
        }
    }
    //2nd Method
    //HashMap Solution using Double String Traversal
    string ptr;
    for(int i=0;i<(int)str.size();i++){
        if(mp.find(str[i])!=mp.end()){
            continue;
        }else{
            ptr.push_back(str[i]);
        }
        mp[str[i]]++;
    }
    for(int i=0;i<(int)ptr.size();i++){
        if(mp.find(str[i])!=mp.end()){
            continue;
        }else{
            cout<<ptr[i]<<endl;
            break;
        }
    }
    //3rd Solution
    //Using HashMap and Single String traversal
    vector<char,int>v;
    for(int i=0;i<(int)str.size();i++){
        v.emplace_back(make_pair(str[i],))
        mp[str[i]]++;
    }for()
}