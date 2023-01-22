#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(i==0 && islower(str[i])){
            str[i]=toupper(str[i]);
        }else if(str[i]=' '){
            if(islower(str[i-1])){
                str[i-1]=toupper(str[i-1]);
            }else if(islower(str[i+1])) 
        }
    }
}