/*20-03-2021*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    string str;cin>>str;
    for(int i=0;i<(int)str.size();i++){
        if(str[i]=='.'){
            break;
        }else{
            cout<<str[i];
        }
    }
}