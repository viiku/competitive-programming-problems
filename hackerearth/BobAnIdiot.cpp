#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char,char>mp;
    int n;char ch1,ch2,ch3;string str;cin>>n;while(n--){
        cin>>ch1>>ch2;
        mp.insert({ch1,ch2});
    }
    cin.ignore();
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(mp.find(str[i])!=mp.end()){
            ch3=mp[str[i]];
            swap(str[i],ch3);
            cout<<ch3;
        }else{
            cout<<str[i];
        }
    }
    cout<<endl;
    return 0;
}