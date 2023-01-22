#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(int i=0;i<str.size()-1;i++){
        if(islower(str[0])){
            str[0]=toupper(str[0]);
            cout<<str[0];
        }else if(str[i]==' ' && islower(str[i+1]) && i>0){
            cout<<str[i];
            str[i+1]=toupper(str[i+1]);
        }else{
            cout<<str[i];
        }
    }
    cout<<str[str.size()-1];
    return 0;
}