#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    vector<char>v;
    for(int i=str.size()-1;i>=0;i++){
        if(str[i]==str[i-1]){
            str.pop_back();
        }else{
            v.emplace_back(str[i]);
        }
    }
    for(auto it:v){
        cout<<it;
    }
    return 0;
}