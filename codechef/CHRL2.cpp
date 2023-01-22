#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    int p=0,q=0,r=0,s=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='C'){
            p++;
        }else if(p>=1){
            if(str[i]=='H'){
                q++;
            }
        }else if(q>=1){
            if(str[i]=='E'){
                r++;
            }
        }else if(r>=1){
            if(str[i]=='F'){
                s++;
            }
        }
    }
}