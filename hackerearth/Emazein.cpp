#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;int x=0,y=0;cin>>str;
    for(int i=0;i<(int)str.size();i++){
        if(str[i]=='L'){
            x-=1;
        }else if(str[i]=='R'){
            x+=1;
        }else if(str[i]=='U'){
            y+=1;
        }else if(str[i]=='D'){
            y-=1;
        }
    }
    cout<<x<<" "<<y<<endl;
}