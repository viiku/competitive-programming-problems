#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    string str;cin>>str;
    int cntz=0,cnto=0;
    for(int i=0;i<(int)str.size();i++){
        if(str[i]=='z'){
            cntz++;
        }else if(str[i]=='o'){
            cnto++;
        }
    }
    // cout<<cntz;
    if(cnto==2*cntz){
        for(int i=0;i<=cntz+1;i++){
            // cout<<cntz<<" ";
            if(str[i]=='z'){
                cntz--;
            }
        }
        if(cntz==0){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }else{
        cout<<"No\n";
    }
}