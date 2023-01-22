#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    int cnt=0;
    for(int i=0;i<(int)str.size();i++){
        if(str[i]=='4' || str[i]=='7'){
            cnt++;
        }
    }
    if(cnt==7 || cnt==4){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    cout<<endl;
}