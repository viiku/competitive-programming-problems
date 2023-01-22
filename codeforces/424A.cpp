#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;string str;cin>>n>>str;
    int cnt=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='X'){
            cnt++;
        }
    }
    if(cnt==n/2){
        cout<<"0\n";
        for(int i=0;i<str.size();i++){
            cout<<str[i];
        }
    }else{
        if(cnt>n/2){
            int p=cnt-n/2;
            cout<<p<<"\n";
            for(int i=0;i<str.size();i++){
                if(isupper(str[i]) && p!=0){
                    str[i]=tolower(str[i]);
                    cout<<str[i];
                    p--;
                }else{
                    cout<<str[i];
                }
            }
        }else{
            int p=n/2-cnt;
            cout<<p<<"\n";
            for(int i=0;i<str.size();i++){
                if(islower(str[i]) && p!=0){
                    str[i]=toupper(str[i]);
                    cout<<str[i];
                    p--;
                }else{
                    cout<<str[i];
                }
            }
        }
    }
    return 0;
}