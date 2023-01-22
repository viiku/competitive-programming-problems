#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;string str;cin>>str>>k;
    set<char>s;
    for(int i=0;i<str.size();i++){
        s.insert(str[i]);
    }
    if(k>str.size()){
        cout<<"impossible"<<"\n";
    }else{
        if(s.size()>=k){
            cout<<0<<"\n";
        }else{
            cout<<k-s.size()<<"\n";
        }
    }
    return 0;
}