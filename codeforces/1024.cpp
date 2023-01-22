#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        getline(cin,str);
        for(int i=0;i<str.size();i++){
            str[i]+='3';
        }
        for(int i=0;i<str.size();i++){
            cout<<str[i];
        }
    }
}