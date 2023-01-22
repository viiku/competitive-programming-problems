#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;getline(cin,str);
    set<string>s;
    for(int i=0;i<str.size();i++){
        if(i==0){
            s.insert(str);
        }else if(str[i]==' ' && str[i+1]!=' ' && i>0){
            s.insert(str);
        }
    }
    cout<<s.size();
    for(auto it:s){
        cout<<it<<"\n";
    }
    return 0;
}