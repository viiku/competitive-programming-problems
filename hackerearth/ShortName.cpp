#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int cnt=0;
    for(int i=0;i<str.size();i++){
        if(isupper(str[i])){
            cnt++;
        }
    }
    for(int i=0;i<str.size();i++){
        if(cnt!=0){
            if(isupper(str[i]) && cnt>1){
                cout<<str[i]<<"."<<" ";
                cnt--;
            }else if(cnt==1){
                if(isupper(str[i])){
                    cout<<str[i];
                    cnt--;
                }
            }
        }else if(cnt==0){
                cout<<str[i];
            }
    }
    return 0;
}