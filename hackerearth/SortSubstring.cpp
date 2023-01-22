#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        vector<char>v;
        string str;int n,m;cin>>str>>n>>m;
        for(int i=0;i<str.size();i++){
            v.emplace_back(str[i]);
        }
        sort(v.begin()+n,v.begin()+m+1,greater<char>());
        for(auto it:v){
            cout<<it;
        }
        cout<<"\n";
    }
    return 0;
}