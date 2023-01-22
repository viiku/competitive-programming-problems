#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;getline(cin,str);
    char ch;cin>>ch;
    int cnt=0;
    for(int i=0;i<str.size();i++){
        if(str[i]==ch){
            cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
} 