#include<bits/stdc++.h>
using namespace std;
void fibonaccistring(string str){
    map<char,int>mp;
    for(int i=0;i<(int)str.size();i++){
        mp[str[i]]++;
    }
    if((int)mp.size()<3){
        cout<<"Dynamic\n";
    }else{
        vector<int>v;
        for(auto it:mp){
            v.emplace_back(it.second);
        }
        int n=(int)mp.size();
        v.resize(n);
        sort(v.begin(),v.end());
        bool ok=true;
        unordered_map<int,int>mp1;
        for(int i=0;i<n;i++){
            mp1[i]++;
            if(i>=2){
                if((v[i-1]+v[i-2]!=v[i]) || mp1.find(v[i]-v[i-1])!=mp1.end() ||  mp1.find(v[i]-v[i-2])!=mp1.end()){
                    continue;
                }else{
                    ok=false;
                }
            }
        }
        if(!ok){
            cout<<"Not\n";
        }else{
            cout<<"Dynamic\n";
        }
    }
}
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        fibonaccistring(str);
    }
}