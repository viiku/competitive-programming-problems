#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;getline(cin,str);
    reverse(str.begin(),str.end());
    int cnt=0;
    bool ok=true;
    for(int i=0;i<(int)str.size();i++){
        if(str[i]==' '){
            ok=false;
        }else if(str[i]!=' ' && ok){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}