#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;string str;cin>>t;while(t--){
        cin.ignore();
        cin>>n>>str;
        set<char>s;
        for(int i=0;i<(int)str.size();i++){
            if(s.count(str[i]) || s.count(str[i]+32) || s.count(str[i]-32)){
                continue;
            }else{
                s.insert(str[i]);
            }
        }
        if(s.size()%2==0){
            cout<<"SPAM\n";
        }else{
            cout<<"AVENGER\n"
        }
    }
}